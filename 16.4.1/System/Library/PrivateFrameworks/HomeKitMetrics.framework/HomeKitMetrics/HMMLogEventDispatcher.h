@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue, HMMLogEventDispatchingDataSource;

@interface HMMLogEventDispatcher : NSObject <HMMLogEventDispatching>

@property (readonly, nonatomic) NSMapTable *observersByClass;
@property (readonly, nonatomic) NSMapTable *observersByProtocol;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak) id<HMMLogEventDispatchingDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)submitLogEvent:(id)a0;
- (void).cxx_destruct;
- (id)_getOrCreateObserversForEventClass:(Class)a0;
- (void)addObserver:(id)a0 forEventClass:(Class)a1;
- (void)addObserver:(id)a0 forEventClasses:(id)a1;
- (void)addObserver:(id)a0 forProtocol:(id)a1;
- (void)submitLogEvent:(id)a0 error:(id)a1;

@end
