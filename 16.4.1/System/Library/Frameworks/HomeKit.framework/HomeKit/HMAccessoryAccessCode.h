@class NSString, NSArray, HMAccessory, HMAccessCodeValue, NSNumber;

@interface HMAccessoryAccessCode : NSObject <HMFObject>

@property (readonly) HMAccessory *accessory;
@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly, copy) NSNumber *uniqueIdentifier;
@property (readonly) BOOL hasRestrictions;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)accessoryAccessCodeWithValue:(id)a0 accessory:(id)a1;

- (void).cxx_destruct;
- (id)createAccessoryAccessCodeValue;
- (id)initWithAccessory:(id)a0 accessCodeValue:(id)a1 uniqueIdentifier:(id)a2 hasRestrictions:(BOOL)a3;

@end
