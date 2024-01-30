@interface ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy : NSEntityMigrationPolicy

- (id)unarchiveObjectWithExternalRepresentation:(id)a0;
- (BOOL)createDestinationInstancesForSourceInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;
- (BOOL)createRelationshipsForDestinationInstance:(id)a0 entityMapping:(id)a1 manager:(id)a2 error:(id *)a3;
- (BOOL)endEntityMapping:(id)a0 manager:(id)a1 error:(id *)a2;

@end
