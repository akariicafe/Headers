@class NSString, ACProtobufVariableValue;

@interface ACProtobufVariableKeyValuePair : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) ACProtobufVariableValue *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithObjectValue:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
