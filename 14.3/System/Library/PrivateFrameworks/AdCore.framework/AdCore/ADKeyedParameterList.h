@class NSString, NSMutableArray;

@interface ADKeyedParameterList : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *parameterLists;

+ (id)options;
+ (Class)parameterListType;

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
- (void)addParameterList:(id)a0;
- (unsigned long long)parameterListsCount;
- (void)clearParameterLists;
- (id)parameterListAtIndex:(unsigned long long)a0;

@end
