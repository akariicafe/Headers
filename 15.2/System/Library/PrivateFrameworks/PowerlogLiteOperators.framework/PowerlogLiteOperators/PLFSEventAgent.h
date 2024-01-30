@class PLXPCResponderOperatorComposition;

@interface PLFSEventAgent : PLAgent

@property (retain) PLXPCResponderOperatorComposition *fileListResponder;
@property struct __FSEventStream { } *stream;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)startMonitoring;
- (void).cxx_destruct;
- (id)init;
- (void)stopMonitoring;
- (void)dealloc;
- (void)initOperatorDependancies;
- (void)registerforFSEventNotification;
- (void)addLogFileNameEntry:(BOOL)a0 withType:(id)a1 withName:(id)a2;
- (void)logLogFileName:(id)a0 withName:(id)a1;

@end
