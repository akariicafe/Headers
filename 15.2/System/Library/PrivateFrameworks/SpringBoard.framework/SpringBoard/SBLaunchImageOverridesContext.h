@class NSString, NSURL, SBActivationSettings;

@interface SBLaunchImageOverridesContext : NSObject

@property (readonly, copy, nonatomic) NSString *sceneID;
@property (readonly, nonatomic) SBActivationSettings *activationSettings;
@property (readonly, nonatomic) BOOL ignoreSnapshots;
@property (readonly, copy, nonatomic) NSString *launchImageName;
@property (readonly, copy, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)initWithSceneID:(id)a0 activationSettings:(id)a1;

@end
