@interface GEONavigationGuidanceState : PBCodable <NSCopying> {
    int _guidanceLevelIgnoringTimeCriterion;
    int _guidanceLevel;
    int _navigationState;
    int _navigationType;
    int _trackedTransportType;
    BOOL _shouldSuppressCellularDataAlerts;
    struct { unsigned char has_guidanceLevelIgnoringTimeCriterion : 1; unsigned char has_guidanceLevel : 1; unsigned char has_navigationState : 1; unsigned char has_navigationType : 1; unsigned char has_trackedTransportType : 1; unsigned char has_shouldSuppressCellularDataAlerts : 1; } _flags;
}

@property (nonatomic) BOOL hasTrackedTransportType;
@property (nonatomic) int trackedTransportType;
@property (nonatomic) BOOL hasNavigationState;
@property (nonatomic) int navigationState;
@property (nonatomic) BOOL hasGuidanceLevel;
@property (nonatomic) int guidanceLevel;
@property (nonatomic) BOOL hasShouldSuppressCellularDataAlerts;
@property (nonatomic) BOOL shouldSuppressCellularDataAlerts;
@property (nonatomic) BOOL hasGuidanceLevelIgnoringTimeCriterion;
@property (nonatomic) int guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) BOOL hasNavigationType;
@property (nonatomic) int navigationType;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)trackedTransportTypeAsString:(int)a0;
- (int)StringAsTrackedTransportType:(id)a0;
- (id)navigationStateAsString:(int)a0;
- (int)StringAsNavigationState:(id)a0;
- (id)guidanceLevelAsString:(int)a0;
- (int)StringAsGuidanceLevel:(id)a0;
- (id)guidanceLevelIgnoringTimeCriterionAsString:(int)a0;
- (int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)a0;
- (id)navigationTypeAsString:(int)a0;
- (int)StringAsNavigationType:(id)a0;
- (id)initWithTransportType:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithGuidanceLevel:(int)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
