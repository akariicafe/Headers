@class PBDataReader, GEOTrafficCameraInformation, NSData, GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback, GEOJunctionViewGuidanceFeedback;

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOJunctionViewGuidanceFeedback *_junctionViewGuidanceFeedback;
    NSData *_routeID;
    GEOSignGuidanceFeedback *_signGuidanceFeedback;
    GEOSpokenGuidanceFeedback *_spokenGuidanceFeedback;
    GEOTrafficCameraInformation *_trafficCameraGuidanceFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _distanceToManeuver;
    float _duration;
    unsigned int _enrouteNoticeIndex;
    unsigned int _eventIndex;
    unsigned int _stepID;
    float _timeToManeuver;
    int _trafficSpeed;
    float _vehicleSpeed;
    struct { unsigned char has_distanceToManeuver : 1; unsigned char has_duration : 1; unsigned char has_enrouteNoticeIndex : 1; unsigned char has_eventIndex : 1; unsigned char has_stepID : 1; unsigned char has_timeToManeuver : 1; unsigned char has_trafficSpeed : 1; unsigned char has_vehicleSpeed : 1; unsigned char read_junctionViewGuidanceFeedback : 1; unsigned char read_routeID : 1; unsigned char read_signGuidanceFeedback : 1; unsigned char read_spokenGuidanceFeedback : 1; unsigned char read_trafficCameraGuidanceFeedback : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) BOOL hasEnrouteNoticeIndex;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) BOOL hasEventIndex;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) float distanceToManeuver;
@property (nonatomic) BOOL hasTimeToManeuver;
@property (nonatomic) float timeToManeuver;
@property (nonatomic) BOOL hasVehicleSpeed;
@property (nonatomic) float vehicleSpeed;
@property (nonatomic) BOOL hasTrafficSpeed;
@property (nonatomic) int trafficSpeed;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) float duration;
@property (readonly, nonatomic) BOOL hasSignGuidanceFeedback;
@property (retain, nonatomic) GEOSignGuidanceFeedback *signGuidanceFeedback;
@property (readonly, nonatomic) BOOL hasSpokenGuidanceFeedback;
@property (retain, nonatomic) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback;
@property (readonly, nonatomic) BOOL hasJunctionViewGuidanceFeedback;
@property (retain, nonatomic) GEOJunctionViewGuidanceFeedback *junctionViewGuidanceFeedback;
@property (readonly, nonatomic) BOOL hasTrafficCameraGuidanceFeedback;
@property (retain, nonatomic) GEOTrafficCameraInformation *trafficCameraGuidanceFeedback;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)trafficSpeedAsString:(int)a0;
- (int)StringAsTrafficSpeed:(id)a0;
- (id)dictionaryRepresentation;

@end
