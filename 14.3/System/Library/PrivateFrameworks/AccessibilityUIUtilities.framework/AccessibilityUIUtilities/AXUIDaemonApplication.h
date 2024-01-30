@interface AXUIDaemonApplication : UIApplication

@property (class, readonly, nonatomic) double preferredWindowLevel;

+ (BOOL)_isSystemUIService;
+ (id)_systemUIServiceIdentifier;
+ (id)_systemUIServiceClientSettings;

- (long long)_frontMostAppOrientation;

@end
