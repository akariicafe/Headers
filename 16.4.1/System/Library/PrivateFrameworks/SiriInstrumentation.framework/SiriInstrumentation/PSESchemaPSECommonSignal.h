@class NSString, NSData;

@interface PSESchemaPSECommonSignal : SISchemaInstrumentationMessage {
    struct { unsigned char eventDonationTimeInSecondsSince2001 : 1; unsigned char isDonatedBySiri : 1; unsigned char hasUserInitiatedFollowup : 1; } _has;
}

@property (nonatomic) double eventDonationTimeInSecondsSince2001;
@property (nonatomic) BOOL hasEventDonationTimeInSecondsSince2001;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int isDonatedBySiri;
@property (nonatomic) BOOL hasIsDonatedBySiri;
@property (nonatomic) BOOL hasUserInitiatedFollowup;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteAction;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteDomain;
- (void)deleteEventDonationTimeInSecondsSince2001;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteIsDonatedBySiri;

@end
