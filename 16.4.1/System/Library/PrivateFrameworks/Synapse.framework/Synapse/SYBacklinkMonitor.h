@class NSString, NSDate, NSObject, SYBacklinkMonitorOperation;
@protocol OS_dispatch_queue, SYBacklinkMonitorTestingDelegate, SYBacklinkMonitorDelegate;

@interface SYBacklinkMonitor : NSObject <SYBacklinkMonitorOperationDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_monitorQueue;
@property (nonatomic) BOOL _needsActivityUpdate;
@property (retain, nonatomic) SYBacklinkMonitorOperation *_activeOperation;
@property (copy, nonatomic) id /* block */ _delayedChangeEvaluationBlock;
@property (retain, nonatomic) NSDate *_lastOperationStartTime;
@property (weak, nonatomic) id<SYBacklinkMonitorTestingDelegate> testingDelegate;
@property (nonatomic) double testingOperationCoalescingInterval;
@property (weak, nonatomic) id<SYBacklinkMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backlinkMonitorOperationDidFinish:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_beginNewOperation;
- (void)_evaluatePendingRequests;
- (void)userActivityDidChange;

@end
