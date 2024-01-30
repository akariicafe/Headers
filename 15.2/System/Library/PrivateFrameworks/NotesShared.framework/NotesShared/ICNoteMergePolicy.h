@interface ICNoteMergePolicy : NSMergePolicy

- (BOOL)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (BOOL)resolveConflictingDeviceMigrationState:(id)a0 with:(id)a1;
- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;
- (void)mergeEncryptedData:(id)a0 forNote:(id)a1 mergeConflict:(id)a2;
- (BOOL)resolveConflictingAttachmentPreviewImage:(id)a0 with:(id)a1;
- (BOOL)resolveConflictingNote:(id)a0 with:(id)a1;
- (id)initWithMergeType:(unsigned long long)a0;
- (id)init;
- (BOOL)resolveConstraintConflict:(id)a0;
- (BOOL)resolveConflictingAttachment:(id)a0 withInlineAttachment:(id)a1;
- (BOOL)resolveConflictingInlineAttachment:(id)a0 with:(id)a1;
- (BOOL)resolveConflictingFolder:(id)a0 with:(id)a1;

@end
