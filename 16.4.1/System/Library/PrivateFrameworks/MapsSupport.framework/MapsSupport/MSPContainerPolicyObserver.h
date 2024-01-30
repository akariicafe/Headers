@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MSPContainerPolicyObserver : NSObject <MSPContainerObserver> {
    unsigned long long _lastKnownItemCount;
    unsigned long long _minimumDeletesForDataLoss;
    double _minimumDeleteRatioForDataLoss;
    NSObject<OS_dispatch_queue> *_observerQueue;
}

@property (nonatomic) BOOL keepMetrics;
@property (nonatomic) unsigned long long dataLossPolicyOffenses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)container:(id)a0 didEditWithNewContents:(id)a1 orderedEdits:(id)a2 cause:(long long)a3 context:(id)a4;
- (void)containerWillEraseContents:(id)a0;
- (id)observationQueueForContainer:(id)a0;
- (void)setContainerItemCount:(unsigned long long)a0;

@end
