@class PLXPCResponderOperatorComposition;

@interface PLFSEventAgent : PLAgent

@property (retain) PLXPCResponderOperatorComposition *fileListResponder;
@property struct __FSEventStream { } *stream;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (void)startMonitoring;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMonitoring;
- (void)initOperatorDependancies;
- (void)registerforFSEventNotification;
- (void)addLogFileNameEntry:(BOOL)a0 withType:(id)a1 withName:(id)a2;
- (void)logLogFileName:(id)a0 withName:(id)a1;

@end
