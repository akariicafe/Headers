@class NSString;

@interface NWAWDNWProxyHop : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProxyName;
@property (retain, nonatomic) NSString *proxyName;

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

@end
