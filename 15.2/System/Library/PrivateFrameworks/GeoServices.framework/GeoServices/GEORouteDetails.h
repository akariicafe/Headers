@interface GEORouteDetails : PBCodable <NSCopying> {
    double _timeSinceRouteResponse;
    int _resultIndex;
    unsigned int _stepID;
    BOOL _isNearCurrentlyDisplayedStep;
    BOOL _isNearRoute;
    BOOL _isUserTrackingOn;
    struct { unsigned char has_timeSinceRouteResponse : 1; unsigned char has_resultIndex : 1; unsigned char has_stepID : 1; unsigned char has_isNearCurrentlyDisplayedStep : 1; unsigned char has_isNearRoute : 1; unsigned char has_isUserTrackingOn : 1; } _flags;
}

@property (nonatomic) BOOL hasResultIndex;
@property (nonatomic) int resultIndex;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) BOOL hasIsNearRoute;
@property (nonatomic) BOOL isNearRoute;
@property (nonatomic) BOOL hasIsNearCurrentlyDisplayedStep;
@property (nonatomic) BOOL isNearCurrentlyDisplayedStep;
@property (nonatomic) BOOL hasIsUserTrackingOn;
@property (nonatomic) BOOL isUserTrackingOn;
@property (nonatomic) BOOL hasTimeSinceRouteResponse;
@property (nonatomic) double timeSinceRouteResponse;

+ (id)routeDetailsWithResultIndex:(int)a0 stepID:(int)a1 nearRoute:(BOOL)a2 nearCurrentlyDisplayedStep:(BOOL)a3 userTrackingOn:(BOOL)a4 timeSinceResponse:(double)a5;
+ (id)routeDetailsWithResultIndex:(int)a0;
+ (id)routeDetailsWithResultIndex:(int)a0 stepID:(int)a1;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithResultIndex:(int)a0;
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
