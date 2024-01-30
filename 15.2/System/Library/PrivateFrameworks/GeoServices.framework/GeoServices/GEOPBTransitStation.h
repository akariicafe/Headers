@class PBDataReader, NSString, GEOLatLng, NSMutableArray, PBUnknownFields;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    NSMutableArray *_zoomNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _stationIndex;
    int _structureType;
    struct { unsigned char has_muid : 1; unsigned char has_stationIndex : 1; unsigned char has_structureType : 1; unsigned char read_unknownFields : 1; unsigned char read_location : 1; unsigned char read_nameDisplayString : 1; unsigned char read_zoomNames : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasStationIndex;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasStructureType;
@property (nonatomic) int structureType;
@property (retain, nonatomic) NSMutableArray *zoomNames;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (retain, nonatomic) NSString *nameDisplayString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)zoomNameType;
+ (BOOL)isValid:(id)a0;

- (id)bestName;
- (id)identifier;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)addZoomName:(id)a0;
- (unsigned long long)zoomNamesCount;
- (void)clearZoomNames;
- (id)zoomNameAtIndex:(unsigned long long)a0;
- (id)structureTypeAsString:(int)a0;
- (int)StringAsStructureType:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
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
- (id)dictionaryRepresentation;

@end
