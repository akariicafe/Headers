@class NSString, NSURL;
@protocol SBActivationSettings;

@interface SBDeviceApplicationScenePlaceholderContentContext : NSObject <SBScenePlaceholderContentContext, NSMutableCopying>

@property (copy, nonatomic) id<SBActivationSettings> activationSettings;
@property (nonatomic) long long layoutEnvironment;
@property (copy, nonatomic) NSString *requestedLaunchIdentifier;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL prefersLiveXIB;
@property (nonatomic) unsigned long long preferredContentType;
@property (nonatomic) BOOL hasOrientationMismatchForClassicApp;
@property (nonatomic) long long sizingPolicy;
@property (readonly, nonatomic) BOOL canShowUserContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivationSettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
