@class NSDictionary, DMFDevice;

@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *valuesByPropertyKey;
@property (readonly, copy, nonatomic) NSDictionary *errorsByPropertyKey;
@property (readonly, nonatomic) DMFDevice *device;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)valueForPropertyKey:(id)a0 error:(id *)a1;
- (id)initWithValuesByPropertyKey:(id)a0 errorsByPropertyKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
