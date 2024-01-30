@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOSharedNavRouteInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { double *list; unsigned long long count; unsigned long long size; } _coordinates;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _trafficColorOffsets;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _trafficColors;
    NSMutableArray *_chargingStations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_coordinates : 1; unsigned char read_trafficColorOffsets : 1; unsigned char read_trafficColors : 1; unsigned char read_chargingStations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long coordinatesCount;
@property (readonly, nonatomic) double *coordinates;
@property (readonly, nonatomic) unsigned long long trafficColorsCount;
@property (readonly, nonatomic) unsigned int *trafficColors;
@property (readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property (readonly, nonatomic) unsigned int *trafficColorOffsets;
@property (retain, nonatomic) NSMutableArray *chargingStations;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)chargingStationsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addCoordinates:(double)a0;
- (void)clearCoordinates;
- (double)coordinatesAtIndex:(unsigned long long)a0;
- (void)setCoordinates:(double *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addChargingStations:(id)a0;
- (unsigned long long)chargingStationsCount;
- (void)clearChargingStations;
- (id)chargingStationsAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addTrafficColor:(unsigned int)a0;
- (void)addTrafficColorOffset:(unsigned int)a0;
- (void)clearTrafficColors;
- (unsigned int)trafficColorAtIndex:(unsigned long long)a0;
- (void)clearTrafficColorOffsets;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)a0;
- (void)setTrafficColors:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setTrafficColorOffsets:(unsigned int *)a0 count:(unsigned long long)a1;

@end
