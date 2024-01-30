@class NSMutableArray, PBUnknownFields;

@interface GEOPDBatchMerchantLookupBrandParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_merchantLookupBrandParameters;
}

@property (retain, nonatomic) NSMutableArray *merchantLookupBrandParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)merchantLookupBrandParameterType;
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
- (void)addMerchantLookupBrandParameter:(id)a0;
- (unsigned long long)merchantLookupBrandParametersCount;
- (void)clearMerchantLookupBrandParameters;
- (id)merchantLookupBrandParameterAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;

@end
