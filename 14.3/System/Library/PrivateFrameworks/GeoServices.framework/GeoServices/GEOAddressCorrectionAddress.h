@class NSString, GEOLocation, PBDataReader;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_addressID : 1; unsigned char read_addressLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAddressLocation;
@property (retain, nonatomic) GEOLocation *addressLocation;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (retain, nonatomic) NSString *addressID;

+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
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
- (id)initWithDictionary:(id)a0;

@end
