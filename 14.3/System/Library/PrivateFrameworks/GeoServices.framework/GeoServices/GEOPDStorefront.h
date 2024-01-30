@class NSMutableArray;

@interface GEOPDStorefront : PBCodable <NSCopying> {
    NSMutableArray *_bundleIds;
}

@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)bundleIdType;
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
- (void)addBundleId:(id)a0;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (id)bundleIdAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;

@end
