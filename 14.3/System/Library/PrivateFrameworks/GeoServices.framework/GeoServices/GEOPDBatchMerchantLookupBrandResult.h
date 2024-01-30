@class NSMutableArray, PBUnknownFields;

@interface GEOPDBatchMerchantLookupBrandResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_merchantLookupBrandResults;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *merchantLookupBrandResults;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)merchantLookupBrandResultType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
- (void)addMerchantLookupBrandResult:(id)a0;
- (unsigned long long)merchantLookupBrandResultsCount;
- (void)clearMerchantLookupBrandResults;
- (id)merchantLookupBrandResultAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)statusCodeAsString:(int)a0;
- (int)StringAsStatusCode:(id)a0;

@end
