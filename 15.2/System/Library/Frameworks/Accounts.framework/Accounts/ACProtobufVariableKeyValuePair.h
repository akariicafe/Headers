@class NSString, ACProtobufVariableValue;

@interface ACProtobufVariableKeyValuePair : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) ACProtobufVariableValue *value;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithObjectValue:(id)a0 forKey:(id)a1;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
