@interface TSKAddedToDocumentContext : NSObject

+ (id)movingContext;
+ (id)unhidingContext;
+ (id)unarchivingContext;
+ (id)importingContextWithImporterID:(id)a0;
+ (id)importingMasterTemplateContextWithImporterID:(id)a0;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)dragMoveContext;
+ (id)dragCopyContext;
+ (id)insertingPrototypeContext;
+ (id)undoDeleteContext;
+ (id)exportFootnoteContext;
+ (id)changeTrackingSubstorageForCopyContext;

- (BOOL)wasMoved;
- (BOOL)wasUnarchived;
- (BOOL)autoUpdateSmartFields;
- (id)importerID;
- (BOOL)wasImportedFromMasterTemplate;
- (struct __CFDictionary { } *)tableIDMap;
- (void)setTableIDMap:(struct __CFDictionary { } *)a0;
- (BOOL)wasPasted;
- (BOOL)uniqueBookmarks;
- (BOOL)syncChanges;
- (BOOL)matchStyle;
- (BOOL)wasDragOperation;
- (BOOL)wasDragMoved;
- (id)undoContext;
- (BOOL)wasUnhidden;
- (BOOL)wasUndoDelete;
- (BOOL)exportingFootnotes;
- (BOOL)changeTrackingSubstorage;
- (BOOL)wasImported;
- (BOOL)invokeDOLC;

@end
