@interface MSPOrderedReplica : MSPReplica

+ (id)allowedEditClasses;
+ (void)_switchForEdit:(id)a0 caseIsInsertRecord:(id /* block */)a1 caseIsEditContents:(id /* block */)a2 caseIsEditPosition:(id /* block */)a3 caseIsRemoveTombstone:(id /* block */)a4;

- (void)_mergeSelfRecord:(id)a0 withRecordFromOtherReplica:(id)a1 identifier:(id)a2 options:(id)a3 edits:(id)a4;
- (BOOL)_containerSerializationRequiresTrackingPositionEdits;
- (id)orderedReplicaByApplyingContainerEdits:(id)a0 toOldContents:(id)a1 forNewContents:(id)a2 recordCreationHandler:(id /* block */)a3 replicaEditApplier:(id /* block */)a4 error:(out id *)a5;

@end
