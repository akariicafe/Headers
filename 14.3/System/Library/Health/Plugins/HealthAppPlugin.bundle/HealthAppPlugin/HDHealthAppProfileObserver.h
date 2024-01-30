@class HDProfileManager, _HKDelayedOperation, NSString, NSObject, HDHAHealthPluginHostFeedGenerator;
@protocol OS_dispatch_queue;

@interface HDHealthAppProfileObserver : NSObject <HDProfileManagerObserver>

@property (retain, nonatomic) HDProfileManager *profileManager;
@property (retain, nonatomic) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *debounceQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (void)profileListDidChange;
- (id)initWithProfileManager:(id)a0;

@end
