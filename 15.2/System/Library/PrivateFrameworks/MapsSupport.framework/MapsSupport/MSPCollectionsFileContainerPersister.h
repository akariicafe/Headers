@interface MSPCollectionsFileContainerPersister : MSPFileContainerPersister

- (BOOL)getSnapshot:(out id *)a0 data:(out id *)a1 forNewContents:(id)a2 edits:(id)a3 appliedToOldContents:(id)a4 error:(out id *)a5;
- (BOOL)getSnapshot:(out id *)a0 data:(out id *)a1 mergingCurrentState:(id)a2 withState:(id)a3 mergeOptions:(id)a4 error:(out id *)a5;
- (id)stateSnapshotFromData:(id)a0;

@end
