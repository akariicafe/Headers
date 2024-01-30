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

+ (Class)exitZoomNameType;
+ (Class)entranceZoomNameType;
+ (BOOL)isValid:(id)a0;

- (id)identifier;
- (void)readAll:(BOOL)a0;
- (void)addEntranceZoomName:(id)a0;
- (void)addExitZoomName:(id)a0;
- (unsigned long long)exitZoomNamesCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (unsigned long long)entranceZoomNamesCount;
- (void)clearEntranceZoomNames;
- (id)entranceZoomNameAtIndex:(unsigned long long)a0;
- (void)clearExitZoomNames;
- (id)exitZoomNameAtIndex:(unsigned long long)a0;
- (id)bestExitName;
- (id)bestEntranceNameWithLocale:(out id *)a0;
- (id)bestExitNameWithLocale:(out id *)a0;
- (id)bestEntranceName;
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
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
