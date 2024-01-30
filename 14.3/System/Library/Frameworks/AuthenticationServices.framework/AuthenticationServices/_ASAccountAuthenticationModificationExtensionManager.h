@class NSArray, NSDictionary, NSMutableOrderedSet, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _ASAccountAuthenticationModificationExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_dataConstructionQueue;
    NSObject<OS_dispatch_queue> *_readOnlyQueue;
    id _extensionMatchingToken;
    NSDictionary *_domainToExtension;
    NSArray *_extensions;
    NSMutableOrderedSet *_observers;
    BOOL _errorEncounteredDuringLastExtensionDiscovery;
    NSUserDefaults *_mobileSafariUserDefaults;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_endExtensionDiscovery;
- (void)_beginExtensionDiscovery;
- (void)_notifyObservers:(id)a0;
- (void)extensionForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)_buildDomainToExtensionDictionaryWithSharedWebCredentialsDatabaseEntries:(id)a0;

@end
