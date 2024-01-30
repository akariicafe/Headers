@class NSDictionary;

@interface CRKFetchDevicePropertiesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *valuesByPropertyKey;
@property (copy, nonatomic) NSDictionary *errorsByPropertyKey;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)valueForPropertyKey:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
