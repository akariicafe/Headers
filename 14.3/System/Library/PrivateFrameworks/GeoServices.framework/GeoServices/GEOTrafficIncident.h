@class NSString, GEOLatLng, NSMutableArray, PBDataReader;

@interface GEOTrafficIncident : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _alertCCodes;
    struct { int *list; unsigned long long count; unsigned long long size; } _transportTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _types;
    NSString *_area;
    unsigned long long _congestionZoneId;
    NSString *_crossStreetName;
    unsigned long long _durationSeconds;
    NSMutableArray *_incidentDescriptions;
    NSString *_incidentId;
    NSMutableArray *_laneMessages;
    GEOLatLng *_location;
    NSString *_name;
    NSMutableArray *_paths;
    NSString *_primaryStreetName;
    NSString *_schedule;
    unsigned long long _startTime;
    NSMutableArray *_tiles;
    unsigned long long _updateTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _advisoryType;
    int _color;
    unsigned int _delaySeconds;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    unsigned int _maxZoom;
    unsigned int _minZoom;
    int _severity;
    float _speedKph;
    int _urgency;
    unsigned int _userReportsCount;
    int _vendor;
    BOOL _curated;
    BOOL _hidden;
    BOOL _ignored;
    BOOL _navigationAlert;
    struct { unsigned char has_congestionZoneId : 1; unsigned char has_durationSeconds : 1; unsigned char has_startTime : 1; unsigned char has_updateTime : 1; unsigned char has_advisoryType : 1; unsigned char has_color : 1; unsigned char has_delaySeconds : 1; unsigned char has_laneClosureCount : 1; unsigned char has_laneClosureType : 1; unsigned char has_maxZoom : 1; unsigned char has_minZoom : 1; unsigned char has_severity : 1; unsigned char has_speedKph : 1; unsigned char has_urgency : 1; unsigned char has_userReportsCount : 1; unsigned char has_vendor : 1; unsigned char has_curated : 1; unsigned char has_hidden : 1; unsigned char has_ignored : 1; unsigned char has_navigationAlert : 1; unsigned char read_alertCCodes : 1; unsigned char read_transportTypes : 1; unsigned char read_types : 1; unsigned char read_area : 1; unsigned char read_crossStreetName : 1; unsigned char read_incidentDescriptions : 1; unsigned char read_incidentId : 1; unsigned char read_laneMessages : 1; unsigned char read_location : 1; unsigned char read_name : 1; unsigned char read_paths : 1; unsigned char read_primaryStreetName : 1; unsigned char read_schedule : 1; unsigned char read_tiles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *paths;
@property (readonly, nonatomic) unsigned long long typesCount;
@property (readonly, nonatomic) int *types;
@property (retain, nonatomic) NSMutableArray *incidentDescriptions;
@property (readonly, nonatomic) BOOL hasIncidentId;
@property (retain, nonatomic) NSString *incidentId;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL hasUpdateTime;
@property (nonatomic) unsigned long long updateTime;
@property (nonatomic) BOOL hasDurationSeconds;
@property (nonatomic) unsigned long long durationSeconds;
@property (nonatomic) BOOL hasNavigationAlert;
@property (nonatomic) BOOL navigationAlert;
@property (nonatomic) BOOL hasLaneClosureCount;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) BOOL hasLaneClosureType;
@property (nonatomic) int laneClosureType;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) unsigned int delaySeconds;
@property (readonly, nonatomic) unsigned long long alertCCodesCount;
@property (readonly, nonatomic) unsigned int *alertCCodes;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL hasSpeedKph;
@property (nonatomic) float speedKph;
@property (nonatomic) BOOL hasMinZoom;
@property (nonatomic) unsigned int minZoom;
@property (nonatomic) BOOL hasMaxZoom;
@property (nonatomic) unsigned int maxZoom;
@property (readonly, nonatomic) BOOL hasPrimaryStreetName;
@property (retain, nonatomic) NSString *primaryStreetName;
@property (readonly, nonatomic) BOOL hasCrossStreetName;
@property (retain, nonatomic) NSString *crossStreetName;
@property (retain, nonatomic) NSMutableArray *laneMessages;
@property (nonatomic) BOOL hasVendor;
@property (nonatomic) int vendor;
@property (nonatomic) BOOL hasCurated;
@property (nonatomic) BOOL curated;
@property (nonatomic) BOOL hasColor;
@property (nonatomic) int color;
@property (nonatomic) BOOL hasIgnored;
@property (nonatomic) BOOL ignored;
@property (readonly, nonatomic) BOOL hasArea;
@property (retain, nonatomic) NSString *area;
@property (nonatomic) BOOL hasAdvisoryType;
@property (nonatomic) int advisoryType;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasSeverity;
@property (nonatomic) int severity;
@property (nonatomic) BOOL hasUrgency;
@property (nonatomic) int urgency;
@property (nonatomic) BOOL hasCongestionZoneId;
@property (nonatomic) unsigned long long congestionZoneId;
@property (nonatomic) BOOL hasUserReportsCount;
@property (nonatomic) unsigned int userReportsCount;
@property (readonly, nonatomic) BOOL hasSchedule;
@property (retain, nonatomic) NSString *schedule;
@property (retain, nonatomic) NSMutableArray *tiles;
@property (readonly, nonatomic) unsigned long long transportTypesCount;
@property (readonly, nonatomic) int *transportTypes;

+ (Class)pathType;
+ (Class)tilesType;
+ (Class)laneMessagesType;
+ (Class)incidentDescriptionType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)urgencyAsString:(int)a0;
- (int)StringAsUrgency:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)pathAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)clearPaths;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)tilesCount;
- (void)addTransportType:(int)a0;
- (void)clearTransportTypes;
- (int)transportTypeAtIndex:(unsigned long long)a0;
- (id)transportTypesAsString:(int)a0;
- (int)StringAsTransportTypes:(id)a0;
- (void)addPath:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)pathsCount;
- (id)description;
- (void)addType:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTiles:(id)a0;
- (id)colorAsString:(int)a0;
- (int)StringAsColor:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)laneClosureTypeAsString:(int)a0;
- (int)StringAsLaneClosureType:(id)a0;
- (void)addIncidentDescription:(id)a0;
- (void)addAlertCCode:(unsigned int)a0;
- (void)clearTypes;
- (void)addLaneMessages:(id)a0;
- (int)typeAtIndex:(unsigned long long)a0;
- (unsigned long long)incidentDescriptionsCount;
- (void)clearIncidentDescriptions;
- (id)incidentDescriptionAtIndex:(unsigned long long)a0;
- (void)clearAlertCCodes;
- (unsigned int)alertCCodeAtIndex:(unsigned long long)a0;
- (unsigned long long)laneMessagesCount;
- (void)clearLaneMessages;
- (id)laneMessagesAtIndex:(unsigned long long)a0;
- (void)setTypes:(int *)a0 count:(unsigned long long)a1;
- (id)typesAsString:(int)a0;
- (int)StringAsTypes:(id)a0;
- (void)setAlertCCodes:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)vendorAsString:(int)a0;
- (int)StringAsVendor:(id)a0;
- (id)advisoryTypeAsString:(int)a0;
- (int)StringAsAdvisoryType:(id)a0;
- (id)severityAsString:(int)a0;
- (int)StringAsSeverity:(id)a0;
- (void)clearTiles;
- (void)setTransportTypes:(int *)a0 count:(unsigned long long)a1;
- (id)tilesAtIndex:(unsigned long long)a0;

@end
