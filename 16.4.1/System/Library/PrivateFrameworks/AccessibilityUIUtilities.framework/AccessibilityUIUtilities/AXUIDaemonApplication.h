@interface AXUIDaemonApplication : UIApplication

@property (class, readonly, nonatomic) BOOL isChamoisSupportEnabled;
@property (class, readonly, nonatomic) double preferredWindowLevel;

+ (BOOL)_isSystemUIService;
+ (BOOL)_isUIKitSystemProcess;
+ (BOOL)_suppressesTextEffectsWindow;
+ (id)_systemUIServiceClientSettings;
+ (id)_systemUIServiceIdentifier;

- (BOOL)_shouldAllowKeyboardArbiter;
- (long long)_frontMostAppOrientation;

@end
