@class NSString;

@interface TPSContextualClientContextCondition : TPSSerializableObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) id value;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
