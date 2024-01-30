@class NSUUID, NSObject;
@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator;

@interface NRDevicePreferencesQuickRelay : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUUID *nrUUID;
@property (retain, nonatomic) NSUUID *agentUUID;
@property (retain, nonatomic) NSObject<OS_nw_path> *path;
@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *pathEvaluator;
@property (nonatomic) unsigned long long assertCount;
@property (nonatomic) BOOL needsReassert;

- (void).cxx_destruct;
- (void)dealloc;
- (void)resetInner;
- (void)updateAgentUUID:(id)a0;
- (void)addQuickRelayRequest;
- (void)removeQuickRelayRequest;
- (void)removeAllQuickRelayRequests;
- (id)initWithNRUUID:(id)a0;
- (BOOL)shouldAssertAgent;
- (void)assertAgent;

@end
