@class NSData;

@interface SISchemaAnnounceNotifications : SISchemaInstrumentationMessage {
    struct { unsigned char isEnabled : 1; unsigned char proxCardSeen : 1; unsigned char replyWithoutConfirmation : 1; unsigned char carPlayStatus : 1; unsigned char isEnabledForHeadphones : 1; unsigned char isCarPlayMuted : 1; } _has;
}

@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL proxCardSeen;
@property (nonatomic) BOOL hasProxCardSeen;
@property (nonatomic) BOOL replyWithoutConfirmation;
@property (nonatomic) BOOL hasReplyWithoutConfirmation;
@property (nonatomic) int carPlayStatus;
@property (nonatomic) BOOL hasCarPlayStatus;
@property (nonatomic) BOOL isEnabledForHeadphones;
@property (nonatomic) BOOL hasIsEnabledForHeadphones;
@property (nonatomic) BOOL isCarPlayMuted;
@property (nonatomic) BOOL hasIsCarPlayMuted;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteIsEnabled;
- (void)deleteCarPlayStatus;
- (void)deleteIsCarPlayMuted;
- (void)deleteIsEnabledForHeadphones;
- (void)deleteProxCardSeen;
- (void)deleteReplyWithoutConfirmation;

@end
