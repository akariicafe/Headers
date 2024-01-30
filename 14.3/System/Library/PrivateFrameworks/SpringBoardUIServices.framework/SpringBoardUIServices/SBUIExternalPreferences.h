@class NSUserDefaults;

@interface SBUIExternalPreferences : NSObject {
    NSUserDefaults *_soundDefaults;
}

@property (nonatomic) BOOL keyboardPlaysSounds;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
