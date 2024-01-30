@interface ZoomServicesKeyboardManager : NSObject

@property (nonatomic) BOOL inUnitTestMode;

+ (id)sharedInstance;

- (long long)keyboardCommandForEvent:(id)a0;

@end
