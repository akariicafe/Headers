@interface AXUIDaemonApplication : UIApplication

@property (class, readonly, nonatomic) double preferredWindowLevel;

+ (id)_systemUIServiceClientSettings;
+ (id)_systemUIServiceIdentifier;
+ (BOOL)_isSystemUIService;

- (long long)_frontMostAppOrientation;

@end
