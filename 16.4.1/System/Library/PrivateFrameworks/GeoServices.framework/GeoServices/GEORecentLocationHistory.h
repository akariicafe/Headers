@class GEOLatLngE7, PBDataReader, NSData, NSMutableArray, PBUnknownFields;

@interface GEORecentLocationHistory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _relativeDistanceToDestinations;
    GEOLatLngE7 *_baseLocation;
    unsigned long long _baseTimestamp;
    NSData *_encodedDistancesToDestination;
    NSData *_encodedLats;
    NSData *_encodedLngs;
    NSMutableArray *_relativeLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _baseDistanceToDestination;
    unsigned int _latlngCount;
    unsigned int _timeResolution;
    struct { unsigned char has_baseTimestamp : 1; unsigned char has_baseDistanceToDestination : 1; unsigned char has_latlngCount : 1; unsigned char has_timeResolution : 1; unsigned char read_unknownFields : 1; unsigned char read_relativeDistanceToDestinations : 1; unsigned char read_baseLocation : 1; unsigned char read_encodedDistancesToDestination : 1; unsigned char read_encodedLats : 1; unsigned char read_encodedLngs : 1; unsigned char read_relativeLocations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBaseLocation;
@property (retain, nonatomic) GEOLatLngE7 *baseLocation;
@property (nonatomic) BOOL hasBaseTimestamp;
@property (nonatomic) unsigned long long baseTimestamp;
@property (retain, nonatomic) NSMutableArray *relativeLocations;
@property (nonatomic) BOOL hasTimeResolution;
@property (nonatomic) unsigned int timeResolution;
@property (nonatomic) BOOL hasBaseDistanceToDestination;
@property (nonatomic) unsigned int baseDistanceToDestination;
@property (readonly, nonatomic) unsigned long long relativeDistanceToDestinationsCount;
@property (readonly, nonatomic) int *relativeDistanceToDestinations;
@property (nonatomic) BOOL hasLatlngCount;
@property (nonatomic) unsigned int latlngCount;
@property (readonly, nonatomic) BOOL hasEncodedLats;
@property (retain, nonatomic) NSData *encodedLats;
@property (readonly, nonatomic) BOOL hasEncodedLngs;
@property (retain, nonatomic) NSData *encodedLngs;
@property (readonly, nonatomic) BOOL hasEncodedDistancesToDestination;
@property (retain, nonatomic) NSData *encodedDistancesToDestination;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)relativeLocationsType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addRelativeDistanceToDestination:(int)a0;
- (void)addRelativeLocations:(id)a0;
- (void)clearRelativeDistanceToDestinations;
- (void)clearRelativeLocations;
- (int)relativeDistanceToDestinationAtIndex:(unsigned long long)a0;
- (id)relativeLocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)relativeLocationsCount;
- (void)setRelativeDistanceToDestinations:(int *)a0 count:(unsigned long long)a1;

@end
