@class NSMutableArray;

@interface CKDPDistributedTimestamps : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *siteIdentifiers;
@property (retain, nonatomic) NSMutableArray *siteVersionVectors;

+ (Class)siteIdentifiersType;
+ (Class)siteVersionVectorsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addSiteIdentifiers:(id)a0;
- (void)addSiteVersionVectors:(id)a0;
- (void)clearSiteIdentifiers;
- (void)clearSiteVersionVectors;
- (id)siteIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)siteIdentifiersCount;
- (id)siteVersionVectorsAtIndex:(unsigned long long)a0;
- (unsigned long long)siteVersionVectorsCount;

@end
