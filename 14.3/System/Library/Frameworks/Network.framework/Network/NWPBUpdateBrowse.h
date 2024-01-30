@class NSString, NSMutableArray;

@interface NWPBUpdateBrowse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;
@property (retain, nonatomic) NSMutableArray *discoveredEndpoints;

+ (Class)discoveredEndpointsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearDiscoveredEndpoints;
- (void)addDiscoveredEndpoints:(id)a0;
- (unsigned long long)discoveredEndpointsCount;
- (id)discoveredEndpointsAtIndex:(unsigned long long)a0;

@end
