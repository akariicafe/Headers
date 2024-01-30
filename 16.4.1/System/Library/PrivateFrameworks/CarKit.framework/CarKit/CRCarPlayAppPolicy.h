@class NSDictionary, NSString;

@interface CRCarPlayAppPolicy : NSObject

@property (nonatomic, getter=isCarPlaySupported) BOOL carPlaySupported;
@property (nonatomic) BOOL canDisplayOnCarScreen;
@property (nonatomic) BOOL launchUsingSiri;
@property (nonatomic) BOOL launchNotificationsUsingSiri;
@property (copy, nonatomic) NSDictionary *siriActivationOptions;
@property (nonatomic) BOOL launchUsingMusicUIService;
@property (nonatomic) BOOL badgesAppIcon;
@property (nonatomic) BOOL showsNotifications;
@property (nonatomic) BOOL handlesCarIntents;
@property (nonatomic) BOOL launchUsingTemplateUI;
@property (nonatomic) unsigned long long applicationCategory;
@property (readonly, copy, nonatomic) NSString *bundlePath;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)bannerLaunchTypeForNotificationContentType:(id)a0;

@end
