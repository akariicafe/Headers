@class NSData;

@interface POMMESSchemaPOMMESPegasusSearchQueryAmpUserState : SISchemaInstrumentationMessage {
    struct { unsigned char hasAmpSubscriptionStatus : 1; unsigned char hasItunesSubscriptionStatus : 1; unsigned char hasUserToken : 1; unsigned char hasSharedUserId : 1; } _has;
}

@property (nonatomic) BOOL hasAmpSubscriptionStatus;
@property (nonatomic) BOOL hasHasAmpSubscriptionStatus;
@property (nonatomic) BOOL hasItunesSubscriptionStatus;
@property (nonatomic) BOOL hasHasItunesSubscriptionStatus;
@property (nonatomic) BOOL hasUserToken;
@property (nonatomic) BOOL hasHasUserToken;
@property (nonatomic) BOOL hasSharedUserId;
@property (nonatomic) BOOL hasHasSharedUserId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteHasAmpSubscriptionStatus;
- (void)deleteHasItunesSubscriptionStatus;
- (void)deleteHasSharedUserId;
- (void)deleteHasUserToken;

@end
