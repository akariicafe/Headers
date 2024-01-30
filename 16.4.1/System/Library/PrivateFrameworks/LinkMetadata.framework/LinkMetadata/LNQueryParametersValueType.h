@interface LNQueryParametersValueType : LNValueType

+ (BOOL)supportsSecureCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
