@class REMReplicaIDSource, CRDocument, REMMutableCRUndo, NSString, NSMutableArray, REMReplicaIDHelper;
@protocol REMReplicaManagerProviding;

@interface REMMutableCRMergeableOrderedSet : NSObject <REMReplicaIDHelperOwner, CRUndoDelegate>

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) CRDocument *document;
@property (retain, nonatomic) REMReplicaIDHelper *replicaIDHelper;
@property (readonly, nonatomic) NSMutableArray *undos;
@property (retain, nonatomic) REMMutableCRUndo *currentUndo;
@property (retain, nonatomic) id<REMReplicaManagerProviding> replicaManagerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)undo;
- (void).cxx_destruct;
- (id)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)undo:(id)a0;
- (id)initWithReplicaIDSource:(id)a0 immutableDocumentToEdit:(id)a1 undos:(id)a2;
- (id)documentToEdit;
- (id)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)a0;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (BOOL)wantsUndoCommands;
- (id)immutableOrderedSet;
- (id)addObject:(id)a0;
- (id)removeObjectAtIndex:(unsigned long long)a0;

@end
