@class NSMutableArray;

@interface PMParameters : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keyvalues;

+ (id)log;
+ (Class)keyvalueType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)boolValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)stringValueForKey:(id)a0;
- (id)floatValueForKey:(id)a0;
- (long long)intValueForKey:(id)a0;
- (void)addKeyvalue:(id)a0;
- (unsigned long long)keyvaluesCount;
- (void)clearKeyvalues;
- (id)keyvalueAtIndex:(unsigned long long)a0;
- (id)parameterKeyValueForKey:(id)a0;
- (id)fallbackKeyValueForKey:(id)a0 fallbackParameters:(id)a1;
- (id)kvForKey:(id)a0 fallbackParameters:(id)a1;
- (id)stringValueForKey:(id)a0 fallbackParameters:(id)a1;
- (long long)intValueForKey:(id)a0 fallbackParameters:(id)a1;
- (id)floatValueForKey:(id)a0 fallbackParameters:(id)a1;
- (BOOL)boolValueForKey:(id)a0 fallbackParameters:(id)a1;

@end
