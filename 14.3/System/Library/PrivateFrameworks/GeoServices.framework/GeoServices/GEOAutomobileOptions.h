@class GEOVehicleSpecifications, PBDataReader, GEOUserPreferences, PBUnknownFields;

@interface GEOAutomobileOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOUserPreferences *_userPreferences;
    GEOVehicleSpecifications *_vehicleSpecifications;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _trafficType;
    BOOL _includeHistoricTravelTime;
    BOOL _includeStaticTravelTime;
    struct { unsigned char has_trafficType : 1; unsigned char has_includeHistoricTravelTime : 1; unsigned char has_includeStaticTravelTime : 1; unsigned char read_unknownFields : 1; unsigned char read_userPreferences : 1; unsigned char read_vehicleSpecifications : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL includeHistoricTravelTime;
@property (nonatomic) BOOL hasTrafficType;
@property (nonatomic) int trafficType;
@property (nonatomic) BOOL hasIncludeStaticTravelTime;
@property (nonatomic) BOOL includeStaticTravelTime;
@property (readonly, nonatomic) BOOL hasUserPreferences;
@property (retain, nonatomic) GEOUserPreferences *userPreferences;
@property (readonly, nonatomic) BOOL hasVehicleSpecifications;
@property (retain, nonatomic) GEOVehicleSpecifications *vehicleSpecifications;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (int)StringAsTrafficType:(id)a0;
- (id)trafficTypeAsString:(int)a0;
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
