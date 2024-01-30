@class NSArray, _DKSyncType, _DKSync2Policy, _CDMutablePerfMetric;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    NSArray *_insertedEvents;
    NSArray *_deletedEventIDs;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent { double startTime; double endTime; } _perfEvent;
}

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)endOperation;

@end
