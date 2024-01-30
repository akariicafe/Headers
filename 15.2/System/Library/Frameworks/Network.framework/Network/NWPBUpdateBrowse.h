@class NSString, NSMutableArray;

@interface NWPBUpdateBrowse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;
@property (retain, nonatomic) NSMutableArray *discoveredEndpoints;

+ (Class)discoveredEndpointsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearDiscoveredEndpoints;
- (void)addDiscoveredEndpoints:(id)a0;
- (unsigned long long)discoveredEndpointsCount;
- (id)discoveredEndpointsAtIndex:(unsigned long long)a0;

@end
