@class NSMutableArray;

@interface PLQuery : PBCodable <NSCopying> {
    struct { unsigned char conjunction : 1; } _has;
}

@property (nonatomic) BOOL hasConjunction;
@property (nonatomic) int conjunction;
@property (readonly, nonatomic) BOOL hasFirst;
@property (retain, nonatomic) PLQuery *first;
@property (readonly, nonatomic) BOOL hasSecond;
@property (retain, nonatomic) PLQuery *second;
@property (retain, nonatomic) NSMutableArray *singleQueries;

+ (Class)singleQueriesType;

- (id)logDescription;
- (void)clearSingleQueries;
- (unsigned long long)singleQueriesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)singleQueriesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)addSingleQueries:(id)a0;
- (id)dictionaryRepresentation;

@end
