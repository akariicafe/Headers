@class NSSet, NSMutableOrderedSet, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface SFCredentialProviderExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _extensionMatchingToken;
    NSSet *_extensions;
    NSMutableOrderedSet *_observers;
    BOOL _errorEncounteredDuringLastExtensionDiscovery;
}

@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) NSSet *extensionsSync;
@property (readonly, nonatomic) NSExtension *primaryExtension;
@property (readonly, nonatomic) NSExtension *primaryExtensionSync;

+ (id)sharedManager;

- (BOOL)shouldShowConfigurationUIForEnablingExtension:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_endExtensionDiscovery;
- (void)_beginExtensionDiscovery;
- (BOOL)extensionIsEnabled:(id)a0;
- (void)getPrimaryExtensionWithCompletion:(id /* block */)a0;
- (void)setExtension:(id)a0 isEnabled:(BOOL)a1;
- (id)displayNameForExtension:(id)a0;
- (id)_extensions;
- (void)_notifyObservers:(id)a0;
- (void)_updateExtensions:(id)a0;

@end
