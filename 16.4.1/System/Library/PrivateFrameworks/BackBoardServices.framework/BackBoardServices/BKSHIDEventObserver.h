@class NSSet, NSMapTable, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface BKSHIDEventObserver : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_deferringAssertionsToObservers;
    NSSet *_lock_deferringResolutions;
    BSServiceConnection *_connection;
}

@property (readonly, nonatomic) NSSet *deferringResolutions;

+ (id)sharedInstance;

- (void)_lock_enableObservation;
- (id)_init;
- (void)_lock_disableObservation;
- (id)addDeferringObserver:(id)a0;
- (id)init;
- (void)didUpdateDeferringResolutions:(id)a0;
- (void).cxx_destruct;
- (id)deferringResolutions;

@end
