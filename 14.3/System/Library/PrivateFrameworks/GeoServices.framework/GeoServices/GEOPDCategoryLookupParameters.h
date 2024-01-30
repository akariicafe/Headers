@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDCategoryLookupParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    long long _industryCode;
    NSString *_mapsCategoryId;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_industryCode : 1; unsigned char read_unknownFields : 1; unsigned char read_mapsCategoryId : 1; unsigned char read_walletCategoryId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapsCategoryId;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (readonly, nonatomic) BOOL hasWalletCategoryId;
@property (retain, nonatomic) NSString *walletCategoryId;
@property (nonatomic) BOOL hasIndustryCode;
@property (nonatomic) long long industryCode;
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
