@class NSUserDefaults;

@interface VKKeyboardCameraDefaults : NSObject {
    NSUserDefaults *_defaults;
}

@property (class, readonly) VKKeyboardCameraDefaults *sharedInstance;

- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)boolForKey:(id)a0;

@end
