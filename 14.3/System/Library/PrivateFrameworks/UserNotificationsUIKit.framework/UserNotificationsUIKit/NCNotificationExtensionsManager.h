@class NCNotificationExtensionCache;

@interface NCNotificationExtensionsManager : NSObject

@property (retain, nonatomic) NCNotificationExtensionCache *extensionsCache;
@property (retain, nonatomic) id extensionsDiscoveryToken;

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)_matchingAttributes;
- (id)extensionForNotificationRequest:(id)a0;
- (void)_stopMatchingExtensions;
- (void)_beginMatchingExtensions;

@end
