@class GEOVisualLaneGuidance, GEOSpokenGuidance, PBDataReader, GEOSignGuidance, GEOJunctionView, PBUnknownFields;

@interface GEOGuidanceEvent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOJunctionView *_junctionView;
    GEOVisualLaneGuidance *_laneGuidance;
    double _maxSpeed;
    double _minSpeed;
    GEOSignGuidance *_signGuidance;
    GEOSpokenGuidance *_spokenGuidance;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _distanceZilchIndex;
    int _endValidDistance;
    unsigned int _enrouteNoticeIndex;
    int _eventType;
    unsigned int _identifier;
    int _offsetForDistanceString;
    int _startValidDistance;
    unsigned int _zilchPathIndex;
    BOOL _sticky;
    struct { unsigned char has_maxSpeed : 1; unsigned char has_minSpeed : 1; unsigned char has_distanceZilchIndex : 1; unsigned char has_endValidDistance : 1; unsigned char has_enrouteNoticeIndex : 1; unsigned char has_eventType : 1; unsigned char has_identifier : 1; unsigned char has_offsetForDistanceString : 1; unsigned char has_startValidDistance : 1; unsigned char has_zilchPathIndex : 1; unsigned char has_sticky : 1; unsigned char read_unknownFields : 1; unsigned char read_junctionView : 1; unsigned char read_laneGuidance : 1; unsigned char read_signGuidance : 1; unsigned char read_spokenGuidance : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStartValidDistance;
@property (nonatomic) int startValidDistance;
@property (nonatomic) BOOL hasEndValidDistance;
@property (nonatomic) int endValidDistance;
@property (readonly, nonatomic) BOOL hasSignGuidance;
@property (retain, nonatomic) GEOSignGuidance *signGuidance;
@property (readonly, nonatomic) BOOL hasSpokenGuidance;
@property (retain, nonatomic) GEOSpokenGuidance *spokenGuidance;
@property (readonly, nonatomic) BOOL hasLaneGuidance;
@property (retain, nonatomic) GEOVisualLaneGuidance *laneGuidance;
@property (readonly, nonatomic) BOOL hasJunctionView;
@property (retain, nonatomic) GEOJunctionView *junctionView;
@property (nonatomic) BOOL hasDistanceZilchIndex;
@property (nonatomic) int distanceZilchIndex;
@property (nonatomic) BOOL hasMinSpeed;
@property (nonatomic) double minSpeed;
@property (nonatomic) BOOL hasMaxSpeed;
@property (nonatomic) double maxSpeed;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) BOOL hasOffsetForDistanceString;
@property (nonatomic) int offsetForDistanceString;
@property (nonatomic) BOOL hasSticky;
@property (nonatomic) BOOL sticky;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
@property (nonatomic) BOOL hasEnrouteNoticeIndex;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)eventTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsEventType:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
