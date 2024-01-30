@class INCodableDescription, NSMutableDictionary;

@interface INCodable : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *customValueForKeyDictionary;
@property (retain, nonatomic, setter=_setObjectDescription:) INCodableDescription *_objectDescription;

+ (BOOL)supportsSecureCoding;

- (id)valueForUndefinedKey:(id)a0;
- (id)_nonNilAttributes;
- (void)_setDoubleValue:(double)a0 forAttribute:(id)a1;
- (void)setNilValueForAllKeys;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (int)_int32ValueForAttribute:(id)a0;
- (unsigned int)_UInt32ValueForAttribute:(id)a0;
- (void)_setFloatValue:(float)a0 forAttribute:(id)a1;
- (void)_setBoolValue:(BOOL)a0 forAttribute:(id)a1;
- (id)_valueForAttribute:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValidKey:(id)a0;
- (void)_setInt64Value:(long long)a0 forAttribute:(id)a1;
- (BOOL)_isAttribute:(id)a0 equalTo:(id)a1;
- (float)_floatValueForAttribute:(id)a0;
- (BOOL)_isStringAttribute:(id)a0 equalTo:(id)a1;
- (id)_dataWithError:(id *)a0;
- (BOOL)readFrom:(id)a0;
- (BOOL)_readFrom:(id)a0 error:(id *)a1;
- (void)_setValue:(void *)a0 forAttribute:(id)a1;
- (void)_setObject:(id)a0 forAttribute:(id)a1;
- (void)_setEmptyArrayForNonNilRepeatedAttributes:(id)a0;
- (unsigned long long)_UInt64ValueForAttribute:(id)a0;
- (BOOL)_boolValueForAttribute:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_setUInt64Value:(unsigned long long)a0 forAttribute:(id)a1;
- (id)initWithCodableDescription:(id)a0 data:(id)a1;
- (id)_copyWithZone:(struct _NSZone { } *)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_nonNilRepeatedAttributes;
- (unsigned long long)hash;
- (void)_setInt32Value:(int)a0 forAttribute:(id)a1;
- (long long)_int64ValueForAttribute:(id)a0;
- (id)_dictionaryRepresentationWithNullValues:(BOOL)a0;
- (void)_setUInt32Value:(unsigned int)a0 forAttribute:(id)a1;
- (BOOL)_writeTo:(id)a0 error:(id *)a1;
- (id)_initWithCodableDescription:(id)a0 data:(id)a1 error:(id *)a2;
- (id)_valueForAttribute:(id)a0 ofClass:(Class)a1;
- (id)data;
- (double)_doubleValueForAttribute:(id)a0;
- (id)dictionaryRepresentation;

@end
