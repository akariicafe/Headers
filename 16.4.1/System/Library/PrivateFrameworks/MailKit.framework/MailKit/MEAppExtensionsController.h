@class NSArray, NSDictionary, NSMapTable, NSObject;
@protocol OS_dispatch_queue, EFCancelable;

@interface MEAppExtensionsController : NSObject {
    NSMapTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _extensionMatchingContext;
    NSArray *_allRemoteExtensions;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *extensionsByIdentifier;
@property (retain, nonatomic) NSArray *previouslyEnabledExtensionIdentifiers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue;
@property (readonly, nonatomic) id<EFCancelable> stateCaptureCancelable;

+ (id)sharedInstance;
+ (id)log;
+ (id)_emailExtensionAttributeDictionary;

- (id)extensionForIdentifier:(id)a0;
- (void)_stopMatchingExtensions;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerMailAppExtensionsObserver:(id)a0 capabilities:(id)a1 includeDisabled:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_extension:(id)a0 matchesCapabilities:(id)a1;
- (BOOL)_extension:(id)a0 matchesCriteria:(id)a1;
- (BOOL)_extension:(id)a0 matchesOldCriteria:(id)a1;
- (id)_extensionsNewlyMatchingFromNewExtensions:(id)a0 currentExtensions:(id)a1 forCriteria:(id)a2;
- (id)_extensionsNoLongerMatchingFromNewExtensions:(id)a0 currentExtensions:(id)a1 forCriteria:(id)a2;
- (void)_logExtensionsStateWithReason:(id)a0;
- (id)_remoteEmailExtensionsForExtensions:(id)a0 enabledOnly:(BOOL)a1;
- (void)_startMatchingExtensions;

@end
