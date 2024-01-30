@class NSArray, _DKSyncType, _DKSync2Policy, _CDMutablePerfMetric;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncDownOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    NSArray *_peers;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent { double startTime; double endTime; } _perfEvent;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)endOperation;

@end
