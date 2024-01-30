@class NSArray, NSString;

@interface CLFSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFSettings *sharedInstance;

@property (retain, nonatomic) NSArray *applicationBundleIdentifiers;
@property (nonatomic) BOOL didCompleteSetup;
@property (nonatomic) BOOL emergencyContactsEnabled;
@property (nonatomic) BOOL emergencyDialEnabled;
@property (nonatomic) BOOL emergencyKeypadEnabled;
@property (retain, nonatomic) NSString *listLayout;
@property (nonatomic) BOOL lockScreenClockEnabled;
@property (nonatomic) BOOL volumeButtonsEnabled;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
