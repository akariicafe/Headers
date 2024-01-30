@class NSDictionary, DBApplicationInfo;

@interface DBApplicationLaunchInfo : NSObject

@property (readonly, nonatomic) DBApplicationInfo *application;
@property (readonly, nonatomic) NSDictionary *activationSettings;

+ (id)launchInfoForApplication:(id)a0;
+ (id)launchInfoForApplication:(id)a0 withActivationSettings:(id)a1;

- (void).cxx_destruct;
- (id)initWithApplication:(id)a0 activationSettings:(id)a1;

@end
