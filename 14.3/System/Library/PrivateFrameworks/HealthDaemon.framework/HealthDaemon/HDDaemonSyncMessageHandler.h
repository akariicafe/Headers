@class HDSyncAnchorMap, HDSyncSession, NSError, NSMutableArray;

@interface HDDaemonSyncMessageHandler : NSObject <HDSyncMessageHandler> {
    Class _syncEntityClass;
    struct HDSyncAnchorRange { long long start; long long end; } _anchorRange;
    HDSyncSession *_session;
    HDSyncAnchorMap *_requiredAnchorMap;
    BOOL _done;
    long long _nextSequence;
    NSMutableArray *_changes;
    long long _accumulatedChangeSetSize;
    long long _lastAnchor;
}

@property (readonly, nonatomic) long long currentAnchor;
@property (readonly, nonatomic) long long sendChangesStatus;
@property (readonly, copy, nonatomic) NSError *sendChangesError;

+ (long long)_sendChanges:(id)a0 session:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)sendCodableChange:(id)a0 resultAnchor:(long long)a1 sequence:(long long)a2 done:(BOOL)a3 error:(id *)a4;
- (id)initWithSyncEntityClass:(Class)a0 anchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 session:(id)a2 requiredAnchorMap:(id)a3;
- (BOOL)_sendChangesWithError:(id *)a0;

@end
