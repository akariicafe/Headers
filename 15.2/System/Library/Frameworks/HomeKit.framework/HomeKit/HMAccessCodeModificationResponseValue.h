@class HMAccessoryAccessCodeValue, NSUUID, NSString, NSArray, NSError, HMAccessCodeValue;

@interface HMAccessCodeModificationResponseValue : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;
@property (copy) HMAccessoryAccessCodeValue *accessoryAccessCodeValue;
@property (copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) long long operationType;
@property (retain) NSError *error;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessoryUUID:(id)a0 accessoryAccessCodeValue:(id)a1 accessCodeValue:(id)a2 operationType:(long long)a3 error:(id)a4;

@end
