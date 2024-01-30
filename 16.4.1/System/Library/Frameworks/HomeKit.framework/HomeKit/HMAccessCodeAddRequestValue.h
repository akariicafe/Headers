@class NSUUID, NSString, NSArray, HMAccessCodeValue;

@interface HMAccessCodeAddRequestValue : NSObject <HMFObject, HMAccessCodeModificationRequestValue, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (copy) NSUUID *userUUID;
@property (copy) NSString *guestName;
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
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccessCodeValue:(id)a0 accessoryUUID:(id)a1;

@end
