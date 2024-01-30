@class NSString;

@interface GEORPNavigationSettings : PBCodable <NSCopying> {
    unsigned long long _distanceUnits;
    unsigned long long _maxAlternateRouteCount;
    NSString *_voiceLanguage;
    unsigned long long _voiceVolume;
    int _userPreferredTransportType;
    BOOL _beepBeforeInstruction;
    BOOL _muteSpeechOverride;
    BOOL _pauseSpokenAudio;
    BOOL _shouldUseGuidanceEventManager;
    BOOL _speechEnabled;
    struct { unsigned char has_distanceUnits : 1; unsigned char has_maxAlternateRouteCount : 1; unsigned char has_voiceVolume : 1; unsigned char has_userPreferredTransportType : 1; unsigned char has_beepBeforeInstruction : 1; unsigned char has_muteSpeechOverride : 1; unsigned char has_pauseSpokenAudio : 1; unsigned char has_shouldUseGuidanceEventManager : 1; unsigned char has_speechEnabled : 1; } _flags;
}

@property (nonatomic) BOOL hasVoiceVolume;
@property (nonatomic) unsigned long long voiceVolume;
@property (nonatomic) BOOL hasDistanceUnits;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) BOOL hasPauseSpokenAudio;
@property (nonatomic) BOOL pauseSpokenAudio;
@property (nonatomic) BOOL hasMuteSpeechOverride;
@property (nonatomic) BOOL muteSpeechOverride;
@property (nonatomic) BOOL hasSpeechEnabled;
@property (nonatomic) BOOL speechEnabled;
@property (nonatomic) BOOL hasMaxAlternateRouteCount;
@property (nonatomic) unsigned long long maxAlternateRouteCount;
@property (nonatomic) BOOL hasBeepBeforeInstruction;
@property (nonatomic) BOOL beepBeforeInstruction;
@property (readonly, nonatomic) BOOL hasVoiceLanguage;
@property (retain, nonatomic) NSString *voiceLanguage;
@property (nonatomic) BOOL hasShouldUseGuidanceEventManager;
@property (nonatomic) BOOL shouldUseGuidanceEventManager;
@property (nonatomic) BOOL hasUserPreferredTransportType;
@property (nonatomic) int userPreferredTransportType;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)userPreferredTransportTypeAsString:(int)a0;
- (int)StringAsUserPreferredTransportType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
