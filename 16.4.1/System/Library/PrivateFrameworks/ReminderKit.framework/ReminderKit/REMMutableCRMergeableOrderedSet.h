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

- (id)addObject:(id)a0;
- (void)undo:(id)a0;
- (id)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)removeObjectAtIndex:(unsigned long long)a0;
- (void)undo;
- (void).cxx_destruct;
- (BOOL)wantsUndoCommands;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (id)documentToEdit;
- (id)immutableOrderedSet;
- (id)initWithReplicaIDSource:(id)a0 immutableDocumentToEdit:(id)a1 undos:(id)a2;
- (id)moveObjectFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)replicaIDHelperDidAcquireReplicaUUID:(id)a0;

@end
