@class GEOPDCategoryInformation, PBDataReader, GEOPDCategoryLookupParameters, PBUnknownFields;

@interface GEOPDCategoryLookupResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDCategoryInformation *_categoryInfo;
    GEOPDCategoryLookupParameters *_categoryLookupParam;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_categoryInfo : 1; unsigned char read_categoryLookupParam : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCategoryLookupParam;
@property (retain, nonatomic) GEOPDCategoryLookupParameters *categoryLookupParam;
@property (readonly, nonatomic) BOOL hasCategoryInfo;
@property (retain, nonatomic) GEOPDCategoryInformation *categoryInfo;
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
