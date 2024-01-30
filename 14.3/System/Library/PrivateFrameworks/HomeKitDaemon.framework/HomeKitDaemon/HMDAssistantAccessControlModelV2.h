@class NSArray, NSNumber;

@interface HMDAssistantAccessControlModelV2 : HMBModel

@property (copy, nonatomic) NSArray *accessoryUUIDs;
@property (copy, nonatomic) NSNumber *requiresAuthenticationForSecureRequests;

+ (id)hmbProperties;

@end
