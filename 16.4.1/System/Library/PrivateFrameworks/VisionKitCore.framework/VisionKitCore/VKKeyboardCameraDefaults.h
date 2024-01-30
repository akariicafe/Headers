@class NSUserDefaults;

@interface VKKeyboardCameraDefaults : NSObject {
    NSUserDefaults *_defaults;
}

@property (class, readonly) VKKeyboardCameraDefaults *sharedInstance;

- (BOOL)boolForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
