@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *domains;

+ (Class)domainsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearDomains;
- (unsigned long long)domainsCount;
- (id)domainsAtIndex:(unsigned long long)a0;
- (void)addDomains:(id)a0;

@end
