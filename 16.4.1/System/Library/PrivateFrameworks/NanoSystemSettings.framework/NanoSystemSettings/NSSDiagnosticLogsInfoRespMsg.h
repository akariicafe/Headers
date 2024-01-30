@class NSMutableArray;

@interface NSSDiagnosticLogsInfoRespMsg : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *paths;

+ (Class)pathsType;

- (void)clearPaths;
- (void)addPaths:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)pathsCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)pathsAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
