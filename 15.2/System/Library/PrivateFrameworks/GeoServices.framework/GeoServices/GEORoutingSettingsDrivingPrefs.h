@interface GEORoutingSettingsDrivingPrefs : PBCodable <NSCopying> {
    BOOL _avoidHighways;
    BOOL _avoidTolls;
    BOOL _speedLimitEnabled;
    BOOL _trafficEnabled;
    BOOL _voiceNavEnabled;
    struct { unsigned char has_avoidHighways : 1; unsigned char has_avoidTolls : 1; unsigned char has_speedLimitEnabled : 1; unsigned char has_trafficEnabled : 1; unsigned char has_voiceNavEnabled : 1; } _flags;
}

@property (nonatomic) BOOL hasAvoidHighways;
@property (nonatomic) BOOL avoidHighways;
@property (nonatomic) BOOL hasAvoidTolls;
@property (nonatomic) BOOL avoidTolls;
@property (nonatomic) BOOL hasSpeedLimitEnabled;
@property (nonatomic) BOOL speedLimitEnabled;
@property (nonatomic) BOOL hasTrafficEnabled;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) BOOL hasVoiceNavEnabled;
@property (nonatomic) BOOL voiceNavEnabled;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
