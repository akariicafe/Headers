@class BRCItemID, BRCAccountSession, BRCAppLibrary, NSMutableIndexSet, NSObject, brc_task_tracker;
@protocol OS_dispatch_group;

@interface BRCTreeEnumerator : NSObject {
    BRCAccountSession *_session;
    id /* block */ _handler;
    BRCItemID *_parentID;
    BRCAppLibrary *_appLibrary;
    unsigned long long _rowID;
    NSMutableIndexSet *_seen;
    NSMutableIndexSet *_toVisit;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_group> *_group;
    id _strongSelf;
    BOOL _isCancelled;
    BOOL _isRecursive;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)cancel;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (BOOL)finishIfCancelled;
- (BOOL)_visitNewParent;
- (void)_doneWithError:(id)a0;
- (unsigned long long)__iterate:(unsigned long long)a0;
- (void)_iterate:(unsigned long long)a0;
- (void)_scheduleAsync;
- (void)enumerateBelow:(id)a0 appLibrary:(id)a1 recursively:(BOOL)a2 handler:(id /* block */)a3;
- (id)initWithSession:(id)a0 group:(id)a1;
- (id)initWithSession:(id)a0 tracker:(id)a1;

@end
