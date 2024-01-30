@class NSString, BSServiceInterface, FBSDisplayLayout, NSMapTable, _FBSDisplayLayoutServiceAssertion, BSServiceConnectionEndpoint;

@interface FBSDisplayLayoutMonitor : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _FBSDisplayLayoutServiceAssertion *_lock_handlerAssertion;
    BOOL _lock_invalidated;
    BSServiceConnectionEndpoint *_deprecated_endpoint;
    id /* block */ _lock_deprecated_handler;
    NSMapTable *_lock_deprecated_observerAssertions;
    char _deprecated_qos;
    long long _deprecated_displayType;
    BOOL _deprecated_singleton;
    BOOL _deprecated_mutable;
}

@property (class, readonly, copy, nonatomic) NSString *mainDisplayInstanceIdentifier;
@property (class, readonly, copy, nonatomic) BSServiceInterface *interface;
@property (class, readonly, copy, nonatomic) NSString *serviceIdentifier;

@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitorForDisplayType:(long long)a0;
+ (id)_endpointForDisplayType:(long long)a0;
+ (id)monitorWithConfiguration:(id)a0;

- (unsigned long long)qualityOfService;
- (void)setHandler:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (id)_initWithConfiguration:(id)a0 singleton:(BOOL)a1 needsDefaultPriority:(BOOL)a2 mutable:(BOOL)a3 displayType:(long long)a4 mutableHandler:(id /* block */)a5;
- (void)dealloc;
- (long long)displayType;
- (id)initWithDisplayType:(long long)a0 qualityOfService:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)removeObserver:(id)a0;
- (id)initWithDisplayType:(long long)a0 handler:(id /* block */)a1;
- (id)init;
- (id)initWithDisplayType:(long long)a0;
- (void)invalidate;
- (id /* block */)handler;
- (void).cxx_destruct;

@end
