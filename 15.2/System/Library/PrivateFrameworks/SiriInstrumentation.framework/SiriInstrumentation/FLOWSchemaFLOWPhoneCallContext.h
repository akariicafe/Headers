@class NSArray, FLOWSchemaFLOWPhoneCallEmergencyContext, NSData;

@interface FLOWSchemaFLOWPhoneCallContext : SISchemaInstrumentationMessage {
    struct { unsigned char phoneCallType : 1; unsigned char phoneCallAppType : 1; unsigned char isThirdPartyFaceTime : 1; unsigned char searchCallHistoryIntent : 1; } _has;
}

@property (nonatomic) int phoneCallType;
@property (nonatomic) BOOL hasPhoneCallType;
@property (copy, nonatomic) NSArray *recipientTypes;
@property (nonatomic) int phoneCallAppType;
@property (nonatomic) BOOL hasPhoneCallAppType;
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallEmergencyContext *emergencyContext;
@property (nonatomic) BOOL hasEmergencyContext;
@property (copy, nonatomic) NSArray *personTypes;
@property (nonatomic) BOOL isThirdPartyFaceTime;
@property (nonatomic) BOOL hasIsThirdPartyFaceTime;
@property (nonatomic) int searchCallHistoryIntent;
@property (nonatomic) BOOL hasSearchCallHistoryIntent;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRecipientType:(int)a0;
- (void)addPersonType:(int)a0;
- (void)clearRecipientType;
- (unsigned long long)recipientTypeCount;
- (int)recipientTypeAtIndex:(unsigned long long)a0;
- (void)clearPersonType;
- (unsigned long long)personTypeCount;
- (int)personTypeAtIndex:(unsigned long long)a0;

@end
