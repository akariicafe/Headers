@interface ICNoteMergePolicy : NSMergePolicy

- (BOOL)resolveConflictingAttachment:(id)a0 with:(id)a1;
- (BOOL)resolveConflictingFolder:(id)a0 with:(id)a1;
- (BOOL)resolveConflictingDeviceMigrationState:(id)a0 with:(id)a1;
- (BOOL)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;
- (BOOL)resolveConstraintConflict:(id)a0;
- (id)initWithMergeType:(unsigned long long)a0;
- (BOOL)resolveConflictingAttachment:(id)a0 withInlineAttachment:(id)a1;
- (BOOL)resolveConflictingAttachmentPreviewImage:(id)a0 with:(id)a1;
- (id)init;
- (BOOL)resolveConflictingInlineAttachment:(id)a0 with:(id)a1;
- (BOOL)resolveConflictingNote:(id)a0 with:(id)a1;

@end
