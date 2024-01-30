@class PBUnknownFields, NSString, PBDataReader, GEOTransitVehicleTime;

@interface GEOTransitVehicleInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _clusteredRouteLineArtworkIndexs;
    GEOTransitVehicleTime *_arrivalTime;
    GEOTransitVehicleTime *_departureTime;
    unsigned long long _tripMuid;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _departureFrequencyMax;
    unsigned int _departureFrequencyMin;
    unsigned int _lineIndex;
    int _pickupDropoffType;
    unsigned int _routeLineArtworkIndex;
    struct { unsigned char has_tripMuid : 1; unsigned char has_departureFrequencyMax : 1; unsigned char has_departureFrequencyMin : 1; unsigned char has_lineIndex : 1; unsigned char has_pickupDropoffType : 1; unsigned char has_routeLineArtworkIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_clusteredRouteLineArtworkIndexs : 1; unsigned char read_arrivalTime : 1; unsigned char read_departureTime : 1; unsigned char read_vehicleNumber : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasArrivalTime;
@property (retain, nonatomic) GEOTransitVehicleTime *arrivalTime;
@property (readonly, nonatomic) BOOL hasDepartureTime;
@property (retain, nonatomic) GEOTransitVehicleTime *departureTime;
@property (nonatomic) BOOL hasLineIndex;
@property (nonatomic) unsigned int lineIndex;
@property (nonatomic) BOOL hasRouteLineArtworkIndex;
@property (nonatomic) unsigned int routeLineArtworkIndex;
@property (readonly, nonatomic) unsigned long long clusteredRouteLineArtworkIndexsCount;
@property (readonly, nonatomic) unsigned int *clusteredRouteLineArtworkIndexs;
@property (nonatomic) BOOL hasPickupDropoffType;
@property (nonatomic) int pickupDropoffType;
@property (nonatomic) BOOL hasDepartureFrequencyMin;
@property (nonatomic) unsigned int departureFrequencyMin;
@property (nonatomic) BOOL hasDepartureFrequencyMax;
@property (nonatomic) unsigned int departureFrequencyMax;
@property (nonatomic) BOOL hasTripMuid;
@property (nonatomic) unsigned long long tripMuid;
@property (readonly, nonatomic) BOOL hasVehicleNumber;
@property (retain, nonatomic) NSString *vehicleNumber;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)addClusteredRouteLineArtworkIndex:(unsigned int)a0;
- (void)clearClusteredRouteLineArtworkIndexs;
- (unsigned int)clusteredRouteLineArtworkIndexAtIndex:(unsigned long long)a0;
- (void)setClusteredRouteLineArtworkIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)pickupDropoffTypeAsString:(int)a0;
- (int)StringAsPickupDropoffType:(id)a0;
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
