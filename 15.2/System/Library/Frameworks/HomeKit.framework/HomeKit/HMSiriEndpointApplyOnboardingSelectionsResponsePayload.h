@class NSString, NSArray;

@interface HMSiriEndpointApplyOnboardingSelectionsResponsePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>

@property (readonly) long long onboardingResult;
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

- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)payloadCopy;
- (id)initWithOnboardingResult:(long long)a0;

@end
