@interface TTMergeableUndoString : TTMergeableString

- (void)addUndoCommand:(id)a0;
- (void)applyUndoCommand:(id)a0;
- (void)deleteSubstrings:(void *)a0 withCharacterRanges:(void *)a1;
- (struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })insertAttributedString:(id)a0 after:(void *)a1 before:(void *)a2;
- (void)undeleteSubstrings:(void *)a0;

@end
