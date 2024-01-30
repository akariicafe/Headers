@class NSArray, HMAccessorySettingsPartialFetchFailureInformation, NSString;

@interface HMAccessorySettingsFetchResponseMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>

@property (readonly, copy) NSArray *settings;
@property (readonly, copy) HMAccessorySettingsPartialFetchFailureInformation *failureInformation;
@property (readonly) NSArray *fetchResults;
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
- (id)initWithSettings:(id)a0 failureInformation:(id)a1;

@end
