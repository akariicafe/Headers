@class PBUnknownFields, NSString, PBDataReader, GEOStyleAttributes;

@interface GEOPBTransitBrand : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _brandIndex;
    struct { unsigned char has_muid : 1; unsigned char has_brandIndex : 1; unsigned char read_unknownFields : 1; unsigned char read_nameDisplayString : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasBrandIndex;
@property (nonatomic) unsigned int brandIndex;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (retain, nonatomic) NSString *nameDisplayString;
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
