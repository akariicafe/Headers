@interface HPLocationServicesSettingsManager : NSObject

@property (nonatomic) BOOL locationServicesEnabled;

+ (void)setLocationAuthorizationStatus:(int)a0;

- (void)homeKitLocationServicesSettingForKeyPathChanged:(id)a0 updatedValue:(BOOL)a1;

@end
