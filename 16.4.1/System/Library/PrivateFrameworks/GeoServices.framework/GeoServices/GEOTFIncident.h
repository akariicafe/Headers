@class NSString, NSData, NSMutableArray, PBDataReader;

@interface GEOTFIncident : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { long long *list; unsigned long long count; unsigned long long size; } _geoids;
    NSString *_crossStreet;
    unsigned long long _durationMin;
    double _endOffset;
    NSString *_incidentId;
    NSMutableArray *_infos;
    double _latitude;
    double _longitude;
    NSData *_openlr;
    double _startOffset;
    long long _startTime;
    NSString *_street;
    long long _updateTime;
    NSData *_zilch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _alertCCode;
    int _color;
    float _delay;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    unsigned int _maxZoomLevel;
    unsigned int _minZoomLevel;
    int _significance;
    float _speed;
    int _trafficTrend;
    int _type;
    BOOL _blocked;
    BOOL _endTimeReliable;
    BOOL _hardBlocked;
    BOOL _hidden;
    BOOL _navigationAlert;
    struct { unsigned char has_durationMin : 1; unsigned char has_endOffset : 1; unsigned char has_latitude : 1; unsigned char has_longitude : 1; unsigned char has_startOffset : 1; unsigned char has_startTime : 1; unsigned char has_updateTime : 1; unsigned char has_alertCCode : 1; unsigned char has_color : 1; unsigned char has_delay : 1; unsigned char has_laneClosureCount : 1; unsigned char has_laneClosureType : 1; unsigned char has_maxZoomLevel : 1; unsigned char has_minZoomLevel : 1; unsigned char has_significance : 1; unsigned char has_speed : 1; unsigned char has_trafficTrend : 1; unsigned char has_type : 1; unsigned char has_blocked : 1; unsigned char has_endTimeReliable : 1; unsigned char has_hardBlocked : 1; unsigned char has_hidden : 1; unsigned char has_navigationAlert : 1; unsigned char read_geoids : 1; unsigned char read_crossStreet : 1; unsigned char read_incidentId : 1; unsigned char read_infos : 1; unsigned char read_openlr : 1; unsigned char read_street : 1; unsigned char read_zilch : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
