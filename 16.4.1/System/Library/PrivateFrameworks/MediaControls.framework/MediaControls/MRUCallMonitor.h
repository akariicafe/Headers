@class NSString, CXCallObserver, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MRUCallMonitor : NSObject <CXCallObserverDelegate>

@property (class, readonly, nonatomic) MRUCallMonitor *sharedMonitor;

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic, getter=isOnCall) BOOL onCall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateOnCall;
- (void)addObserver:(id)a0;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)setOnCall:(BOOL)a0;
- (BOOL)isCallActive;
- (void).cxx_destruct;

@end
