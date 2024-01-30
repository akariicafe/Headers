@interface CLFCameraSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFCameraSettings *sharedInstance;

@property (nonatomic) BOOL browsePhotosEnabled;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
