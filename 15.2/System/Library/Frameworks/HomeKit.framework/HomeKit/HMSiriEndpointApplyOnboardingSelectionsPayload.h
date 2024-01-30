@class NSUUID, HMSiriEndpointOnboardingSelections, NSString, NSArray;

@interface HMSiriEndpointApplyOnboardingSelectionsPayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) HMSiriEndpointOnboardingSelections *onboardingSelections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)payloadCopy;
- (id)initWithAccessoryUUID:(id)a0 onboardingSelections:(id)a1;

@end
