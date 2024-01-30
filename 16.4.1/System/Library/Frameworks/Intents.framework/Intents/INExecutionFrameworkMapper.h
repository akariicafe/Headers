@class NSMutableDictionary;

@interface INExecutionFrameworkMapper : NSObject

@property (readonly, copy, nonatomic) NSMutableDictionary *_appToExtensionIdentifiers;
@property (readonly, nonatomic) BOOL _filled;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;

+ (void)initialize;

- (id)appBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;
- (void)loadSystemExtensionInformation;
- (id)displayableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;
- (void)dealloc;
- (id)extensionBundleIdentifiersForSystemAppIdentifier:(id)a0;
- (id)init;
- (void)installedApplicationsDidChange:(id)a0;
- (void)_addExtensionBundleIdentifier:(id)a0 forAppBundleIdentifier:(id)a1;
- (id)launchableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
