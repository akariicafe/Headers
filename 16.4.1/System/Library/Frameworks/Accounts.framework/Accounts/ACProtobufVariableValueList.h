@class NSArray, NSSet, NSMutableArray;

@interface ACProtobufVariableValueList : PBCodable <NSCopying>

@property (copy, nonatomic) NSArray *array;
@property (copy, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (id)valueAtIndex:(unsigned long long)a0;
- (void)addValue:(id)a0;
- (id)initWithArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithSet:(id)a0;
- (unsigned long long)valuesCount;
- (void).cxx_destruct;
- (void)clearValues;
- (id)_convertArray:(id)a0;

@end
