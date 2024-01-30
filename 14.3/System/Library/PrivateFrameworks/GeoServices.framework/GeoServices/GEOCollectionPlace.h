@class PBDataReader, NSString, GEOLatLng, PBUnknownFields;

@interface GEOCollectionPlace : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_address;
    GEOLatLng *_coordinate;
    unsigned long long _muid;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _providerId;
    struct { unsigned char has_muid : 1; unsigned char has_providerId : 1; unsigned char read_unknownFields : 1; unsigned char read_address : 1; unsigned char read_coordinate : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasProviderId;
@property (nonatomic) int providerId;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) NSString *address;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
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
