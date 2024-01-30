@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying> {
    int _locationType;
    int _navVoiceVolume;
    int _preferredTransportMode;
    BOOL _avoidBusyRoads;
    BOOL _avoidHighways;
    BOOL _avoidHills;
    BOOL _avoidStairs;
    BOOL _avoidTolls;
    BOOL _eBike;
    BOOL _findMyCarEnabled;
    BOOL _headingEnabled;
    BOOL _labelEnabled;
    BOOL _pauseSpokenAudioEnabled;
    BOOL _speedLimitEnabled;
    BOOL _trafficEnabled;
    struct { unsigned char has_locationType : 1; unsigned char has_navVoiceVolume : 1; unsigned char has_preferredTransportMode : 1; unsigned char has_avoidBusyRoads : 1; unsigned char has_avoidHighways : 1; unsigned char has_avoidHills : 1; unsigned char has_avoidStairs : 1; unsigned char has_avoidTolls : 1; unsigned char has_eBike : 1; unsigned char has_findMyCarEnabled : 1; unsigned char has_headingEnabled : 1; unsigned char has_labelEnabled : 1; unsigned char has_pauseSpokenAudioEnabled : 1; unsigned char has_speedLimitEnabled : 1; unsigned char has_trafficEnabled : 1; } _flags;
}

@property (nonatomic) BOOL hasPreferredTransportMode;
@property (nonatomic) int preferredTransportMode;
@property (nonatomic) BOOL hasAvoidTolls;
@property (nonatomic) BOOL avoidTolls;
@property (nonatomic) BOOL hasAvoidHighways;
@property (nonatomic) BOOL avoidHighways;
@property (nonatomic) BOOL hasHeadingEnabled;
@property (nonatomic) BOOL headingEnabled;
@property (nonatomic) BOOL hasSpeedLimitEnabled;
@property (nonatomic) BOOL speedLimitEnabled;
@property (nonatomic) BOOL hasNavVoiceVolume;
@property (nonatomic) int navVoiceVolume;
@property (nonatomic) BOOL hasPauseSpokenAudioEnabled;
@property (nonatomic) BOOL pauseSpokenAudioEnabled;
@property (nonatomic) BOOL hasFindMyCarEnabled;
@property (nonatomic) BOOL findMyCarEnabled;
@property (nonatomic) BOOL hasTrafficEnabled;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) BOOL hasLabelEnabled;
@property (nonatomic) BOOL labelEnabled;
@property (nonatomic) BOOL hasAvoidHills;
@property (nonatomic) BOOL avoidHills;
@property (nonatomic) BOOL hasAvoidStairs;
@property (nonatomic) BOOL avoidStairs;
@property (nonatomic) BOOL hasAvoidBusyRoads;
@property (nonatomic) BOOL avoidBusyRoads;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL hasEBike;
@property (nonatomic) BOOL eBike;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (int)StringAsLocationType:(id)a0;
- (id)locationTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsNavVoiceVolume:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)navVoiceVolumeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (int)StringAsPreferredTransportMode:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)preferredTransportModeAsString:(int)a0;

@end
