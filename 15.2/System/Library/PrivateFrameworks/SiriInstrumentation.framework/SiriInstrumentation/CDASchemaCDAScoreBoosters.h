@class NSData;

@interface CDASchemaCDAScoreBoosters : SISchemaInstrumentationMessage {
    struct { unsigned char deviceBoost : 1; unsigned char recentUnlockBoost : 1; unsigned char recentRaiseToWakeBoost : 1; unsigned char recentSiriRequestBoost : 1; unsigned char recentMotionBoost : 1; unsigned char recentPlaybackBoost : 1; unsigned char isTrump : 1; unsigned char trumpReason : 1; } _has;
}

@property (nonatomic) unsigned int deviceBoost;
@property (nonatomic) BOOL hasDeviceBoost;
@property (nonatomic) unsigned int recentUnlockBoost;
@property (nonatomic) BOOL hasRecentUnlockBoost;
@property (nonatomic) unsigned int recentRaiseToWakeBoost;
@property (nonatomic) BOOL hasRecentRaiseToWakeBoost;
@property (nonatomic) unsigned int recentSiriRequestBoost;
@property (nonatomic) BOOL hasRecentSiriRequestBoost;
@property (nonatomic) unsigned int recentMotionBoost;
@property (nonatomic) BOOL hasRecentMotionBoost;
@property (nonatomic) unsigned int recentPlaybackBoost;
@property (nonatomic) BOOL hasRecentPlaybackBoost;
@property (nonatomic) BOOL isTrump;
@property (nonatomic) BOOL hasIsTrump;
@property (nonatomic) int trumpReason;
@property (nonatomic) BOOL hasTrumpReason;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
