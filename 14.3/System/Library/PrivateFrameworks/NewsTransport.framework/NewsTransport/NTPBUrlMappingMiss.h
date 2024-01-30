@class NSString, NSMutableArray;

@interface NTPBUrlMappingMiss : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasHost;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSMutableArray *paths;

+ (Class)pathsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPaths;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)pathsCount;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)pathsAtIndex:(unsigned long long)a0;
- (void)addPaths:(id)a0;

@end
