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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)singleQueriesCount;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addSingleQueries:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)logDescription;
- (id)description;
- (id)singleQueriesAtIndex:(unsigned long long)a0;
- (void)clearSingleQueries;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
