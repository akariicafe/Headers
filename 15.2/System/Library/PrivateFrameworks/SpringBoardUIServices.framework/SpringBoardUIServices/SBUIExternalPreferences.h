@class NSUserDefaults;

@interface SBUIExternalPreferences : NSObject {
    NSUserDefaults *_soundDefaults;
}

@property (nonatomic) BOOL keyboardPlaysSounds;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
