@class HMFLocationAuthorization, NSString, CLLocationManager;

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _ready;
}

@property (readonly) HMFLocationAuthorization *authorization;
@property (readonly) CLLocationManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)isReady;
- (id)initWithAuthorization:(id)a0;
- (id)initWithTimeout:(double)a0;
- (void)main;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
