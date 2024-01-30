@class NSString, HMDLogEventDispatcher, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLogEventAnalyzerContext : NSObject <HMDLogEventAnalyzerContext>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitLogEvent:(id)a0;
- (id)initWithWorkQueue:(id)a0;

@end
