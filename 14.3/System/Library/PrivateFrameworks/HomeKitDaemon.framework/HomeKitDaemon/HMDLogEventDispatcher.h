@class NSMapTable, HMDLogEventContextProvider, HMDHomeConfigurationLogEvent, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDLogEventDispatcher : HMFObject {
    id<HMFLocking> _lock;
}

@property (readonly, nonatomic) NSMapTable *logEventObserversByEventType;
@property (nonatomic) unsigned long long cachedHomeConfigurationVersion;
@property (readonly, nonatomic) HMDLogEventContextProvider *logEventContextProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMDHomeConfigurationLogEvent *cachedHomeConfiguration;

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)submitLogEvent:(id)a0;
- (void)submitLogEvent:(id)a0 error:(id)a1;
- (void)addObserver:(id)a0 forEventTypes:(id)a1;
- (void)removeObserver:(id)a0 forEventType:(id)a1;
- (void)addObserver:(id)a0 forEventType:(id)a1;

@end
