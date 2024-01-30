@class INCodableDescription, INCodable;

@interface INCustomObject : INObject

@property (retain, nonatomic, setter=_setBackingStore:) INCodable *_backingStore;
@property (readonly, nonatomic) INCodableDescription *codableDescription;

+ (BOOL)supportsSecureCoding;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCodableDescription:(id)a0;
- (BOOL)_isValidKey:(id)a0;
- (id)initWithIntent:(id)a0 parameterName:(id)a1 reference:(id)a2;
- (id)initWithObject:(id)a0 codableDescription:(id)a1;

@end
