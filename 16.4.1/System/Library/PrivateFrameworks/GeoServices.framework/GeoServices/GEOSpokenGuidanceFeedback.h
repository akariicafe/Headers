@class GEOTrafficCameraInformation;

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {
    GEOTrafficCameraInformation *_trafficCameraGuidanceFeedback;
    int _spokenGuidanceIndex;
    BOOL _shortPrompt;
    struct { unsigned char has_spokenGuidanceIndex : 1; unsigned char has_shortPrompt : 1; } _flags;
}

@property (nonatomic) BOOL hasSpokenGuidanceIndex;
@property (nonatomic) int spokenGuidanceIndex;
@property (nonatomic) BOOL hasShortPrompt;
@property (nonatomic) BOOL shortPrompt;
@property (readonly, nonatomic) BOOL hasTrafficCameraGuidanceFeedback;
@property (retain, nonatomic) GEOTrafficCameraInformation *trafficCameraGuidanceFeedback;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
