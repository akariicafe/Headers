@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, PRBTGroupLocalizerDelegate, OS_os_log;

@interface PRBTGroupLocalizer : NSObject <PRBTLocalizerDelegate> {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *proximityQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSMutableArray *localizerArray;
@property (retain, nonatomic) NSMutableArray *localizerShouldRangeArray;
@property (retain, nonatomic) NSMutableArray *localizerStateArray;
@property (retain, nonatomic) NSMutableDictionary *uuidIndexMap;
@property (weak, nonatomic) id<PRBTGroupLocalizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)btLocalizerChangedState:(unsigned long long)a0 onItem:(id)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1 id:(id)a2 isUT:(BOOL)a3;
- (void)didFailWithError:(id)a0 onItem:(id)a1;
- (void)didUpdateBTProximity:(id)a0;
- (void)informDelegateRangingStarted:(id)a0 withError:(id)a1;
- (void)informDelegateRangingStopped:(id)a0 withError:(id)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1 id:(id)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1 id:(id)a2 isUT:(BOOL)a3 withAnalytics:(BOOL)a4;
- (id)initWithDelegate:(id)a0 queue:(id)a1 id:(id)a2 withAnalytics:(BOOL)a3;
- (BOOL)restartRangingOn:(id)a0 withError:(id *)a1;
- (BOOL)startRangingOn:(id)a0 withError:(id *)a1;
- (BOOL)stopRangingOn:(id)a0 withError:(id *)a1;
- (void)updateDelegateWithSelector:(SEL)a0 object:(id)a1;
- (void)willIntegrateBTRSSI:(id)a0;

@end
