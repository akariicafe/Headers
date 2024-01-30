@class NSUUID, NSObject;
@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator;

@interface NRDevicePreferencesQuickRelay : NSObject {
    BOOL _needsReassert;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_nrUUID;
    NSUUID *_agentUUID;
    NSObject<OS_nw_path> *_path;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    unsigned long long _assertCount;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)addQuickRelayRequest;
- (void)removeQuickRelayRequest;
- (void)removeAllQuickRelayRequests;
- (id)initWithNRUUID:(id)a0;

@end
