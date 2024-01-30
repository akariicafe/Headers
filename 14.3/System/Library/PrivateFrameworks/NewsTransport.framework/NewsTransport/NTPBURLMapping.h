@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *domains;

+ (Class)domainsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDomains:(id)a0;
- (void)clearDomains;
- (unsigned long long)domainsCount;
- (id)domainsAtIndex:(unsigned long long)a0;

@end
