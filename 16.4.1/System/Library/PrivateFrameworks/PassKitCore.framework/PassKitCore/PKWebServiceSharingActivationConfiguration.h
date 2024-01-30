@class NSString, NSArray, PKOSVersionRequirementRange;

@interface PKWebServiceSharingActivationConfiguration : NSObject

@property (readonly, nonatomic) NSString *channelBundleIdentifier;
@property (readonly, nonatomic) long long channelRiskLevel;
@property (readonly, nonatomic) long long accessPassType;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;
@property (readonly, nonatomic) NSString *manufacturerIdentifier;
@property (readonly, nonatomic) long long codeLength;
@property (readonly, nonatomic) unsigned long long defaultState;
@property (readonly, nonatomic) long long trustLevel;
@property (readonly, nonatomic) NSArray *blockedSharingChannels;
@property (readonly, nonatomic) NSArray *allowedSharingChannels;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
