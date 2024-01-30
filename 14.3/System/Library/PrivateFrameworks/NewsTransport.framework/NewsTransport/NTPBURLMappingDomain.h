@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic) double averageSafariVisitsPerDay;

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
