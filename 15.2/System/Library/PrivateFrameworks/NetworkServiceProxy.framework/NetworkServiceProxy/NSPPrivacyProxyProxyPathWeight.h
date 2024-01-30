@interface NSPPrivacyProxyProxyPathWeight : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _proxies;
}

@property (nonatomic) unsigned int weight;
@property (readonly, nonatomic) unsigned long long proxiesCount;
@property (readonly, nonatomic) unsigned int *proxies;

- (void)addProxies:(unsigned int)a0;
- (unsigned int)proxiesAtIndex:(unsigned long long)a0;
- (void)clearProxies;
- (void)setProxies:(unsigned int *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
