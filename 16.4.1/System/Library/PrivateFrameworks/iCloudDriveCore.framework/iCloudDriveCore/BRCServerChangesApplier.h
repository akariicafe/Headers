@class BRCAccountSessionFPFS;

@interface BRCServerChangesApplier : NSObject

@property (readonly, nonatomic) BRCAccountSessionFPFS *session;

- (id)initWithAccountSession:(id)a0;
- (void).cxx_destruct;
- (BOOL)_handleServerItemBRAliasIfNeeded:(id)a0 li:(id)a1 jobID:(long long)a2 zone:(id)a3 diffs:(unsigned long long)a4;
- (void)applyChanges:(id)a0 localItem:(id)a1 rank:(long long)a2 zone:(id)a3 hasFinished:(BOOL *)a4;

@end
