@interface TUDialAssist : NSObject

@property (class, readonly, nonatomic) TUDialAssist *sharedInstance;

@property (readonly, nonatomic) int dialAssistUserSettingsChangedToken;

- (id)init;
- (void)dealloc;

@end
