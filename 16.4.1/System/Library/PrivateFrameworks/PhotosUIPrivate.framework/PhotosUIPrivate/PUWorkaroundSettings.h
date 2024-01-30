@interface PUWorkaroundSettings : PXSettings

@property (nonatomic) BOOL addRemoveVideoLayer;
@property (nonatomic) BOOL shouldWorkAround54502886;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
