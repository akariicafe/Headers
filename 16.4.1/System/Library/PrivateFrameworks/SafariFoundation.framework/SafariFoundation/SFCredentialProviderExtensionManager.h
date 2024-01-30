@class NSSet, NSMutableOrderedSet, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface SFCredentialProviderExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _extensionMatchingToken;
    NSSet *_extensions;
    NSMutableOrderedSet *_observers;
    BOOL _errorEncounteredDuringLastExtensionDiscovery;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _observerLock;
}

@property (class, readonly) SFCredentialProviderExtensionManager *sharedManager;

@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) NSSet *extensionsSync;
@property (readonly, nonatomic) NSExtension *primaryExtension;
@property (readonly, nonatomic) NSExtension *primaryExtensionSync;

- (void)_notifyObservers:(id)a0;
- (void)_updateExtensions:(id)a0;
- (id)displayNameForExtension:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)extensionIsEnabled:(id)a0;
- (void)getPrimaryExtensionWithCompletion:(id /* block */)a0;
- (void)setExtension:(id)a0 isEnabled:(BOOL)a1;
- (id)_extensions;
- (BOOL)shouldShowConfigurationUIForEnablingExtension:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_endExtensionDiscovery;
- (void)_beginExtensionDiscovery;
- (id)init;
- (void).cxx_destruct;

@end
