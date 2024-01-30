@class NSString;

@interface PXApplicationSettings : PXSettings

@property (nonatomic) double defaultNavigationTimeoutDuration;
@property (nonatomic) BOOL wantsPseudostringsWithSpecialCharacters;
@property (copy, nonatomic) NSString *stringWithSpecialCharacters;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (void).cxx_destruct;

@end
