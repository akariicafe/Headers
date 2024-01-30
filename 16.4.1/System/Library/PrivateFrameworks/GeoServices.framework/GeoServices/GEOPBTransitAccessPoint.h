@class PBDataReader, NSString, GEOLatLng, NSMutableArray, PBUnknownFields;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_entranceNameDisplayString;
    NSMutableArray *_entranceZoomNames;
    NSString *_exitNameDisplayString;
    NSMutableArray *_exitZoomNames;
    GEOLatLng *_location;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _accessPointIndex;
    unsigned int _stationIndex;
    struct { unsigned char has_muid : 1; unsigned char has_accessPointIndex : 1; unsigned char has_stationIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_entranceNameDisplayString : 1; unsigned char read_entranceZoomNames : 1; unsigned char read_exitNameDisplayString : 1; unsigned char read_exitZoomNames : 1; unsigned char read_location : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasAccessPointIndex;
@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasStationIndex;
@property (nonatomic) unsigned int stationIndex;
@property (retain, nonatomic) NSMutableArray *entranceZoomNames;
@property (retain, nonatomic) NSMutableArray *exitZoomNames;
@property (readonly, nonatomic) BOOL hasEntranceNameDisplayString;
@property (retain, nonatomic) NSString *entranceNameDisplayString;
@property (readonly, nonatomic) BOOL hasExitNameDisplayString;
@property (retain, nonatomic) NSString *exitNameDisplayString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)entranceZoomNameType;
+ (Class)exitZoomNameType;

- (id)initWithData:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
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
- (void)addEntranceZoomName:(id)a0;
- (void)addExitZoomName:(id)a0;
- (id)bestEntranceName;
- (id)bestEntranceNameWithLocale:(out id *)a0;
- (id)bestExitName;
- (id)bestExitNameWithLocale:(out id *)a0;
- (void)clearEntranceZoomNames;
- (void)clearExitZoomNames;
- (id)entranceZoomNameAtIndex:(unsigned long long)a0;
- (unsigned long long)entranceZoomNamesCount;
- (id)exitZoomNameAtIndex:(unsigned long long)a0;
- (unsigned long long)exitZoomNamesCount;

@end
