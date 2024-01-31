@class NSArray;

@interface CNExternalUUIDContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) NSArray *externalUUIDs;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)shortDebugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExternalUUIDs:(id)a0;

@end
