@class _UNNotificationContentExtensionCache;

@interface _UNNotificationContentExtensionManager : NSObject

@property (retain, nonatomic) _UNNotificationContentExtensionCache *extensionsCache;
@property (retain, nonatomic) id extensionsDiscoveryToken;

+ (id)sharedInstance;
+ (void)initialize;

- (id)_matchingAttributes;
- (void)_stopMatchingExtensions;
- (void).cxx_destruct;
- (id)init;
- (void)_beginMatchingExtensions;
- (id)extensionForNotificationSourceIdentifier:(id)a0 categoryIdentifier:(id)a1;

@end
