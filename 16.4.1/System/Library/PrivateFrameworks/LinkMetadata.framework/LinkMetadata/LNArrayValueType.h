@class LNValueType;

@interface LNArrayValueType : LNValueType

@property (readonly, copy, nonatomic) LNValueType *memberValueType;
@property (readonly, nonatomic) long long capabilities;

+ (BOOL)supportsSecureCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (id)initWithMemberValueType:(id)a0;
- (id)initWithMemberValueType:(id)a0 capabilities:(long long)a1;
- (id)metadataClassesForCoding;
- (id)objectClassesForCoding;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
