@interface NoteResurrectionMergePolicy : NSMergePolicy

+ (id)sharedNoteResurrectionMergePolicy;

- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;
- (BOOL)accountExists:(id)a0;
- (id)snapshotFromRecord:(id)a0;
- (id)localStoreForNote:(id)a0;

@end
