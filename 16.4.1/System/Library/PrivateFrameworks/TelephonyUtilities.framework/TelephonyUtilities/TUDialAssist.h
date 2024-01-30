@interface TUDialAssist : NSObject

@property (class, readonly, nonatomic) TUDialAssist *sharedInstance;

@property (readonly, nonatomic) int dialAssistUserSettingsChangedToken;

- (void)dealloc;
- (id)init;

@end
