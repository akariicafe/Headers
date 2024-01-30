@interface NoteResurrectionMergePolicy : NSMergePolicy

+ (id)sharedNoteResurrectionMergePolicy;

- (id)localStoreForNote:(id)a0;
- (BOOL)accountExists:(id)a0;
- (id)snapshotFromRecord:(id)a0;
- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;

@end
