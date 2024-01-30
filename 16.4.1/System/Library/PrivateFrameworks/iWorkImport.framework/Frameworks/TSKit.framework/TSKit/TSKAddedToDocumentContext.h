@class NSMutableArray;

@interface TSKAddedToDocumentContext : NSObject {
    NSMutableArray *mInsertedTableInfos;
}

+ (id)defaultContext;
+ (id)dragCopyContext;
+ (id)dragMoveContext;
+ (id)importingContextWithImporterID:(id)a0;
+ (id)unhidingContext;
+ (id)exportFootnoteContext;
+ (id)insertingPrototypeContext;
+ (id)movingContext;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)unarchivingContext;
+ (id)undoDeleteContext;
+ (id)preserveParentStorageContext;
+ (id)cloningContext;
+ (id)exportMergedHeaderContext;
+ (id)migrateStylesContext;
+ (id)moveSectionContext;
+ (id)textBoxLinkageContext;

- (BOOL)wasMoved;
- (void).cxx_destruct;
- (BOOL)autoUpdateSmartFields;
- (id)importerID;
- (BOOL)invokeDOLC;
- (BOOL)matchStyle;
- (BOOL)syncChanges;
- (id)undoContext;
- (BOOL)wasDragMoved;
- (BOOL)wasDragOperation;
- (BOOL)wasImported;
- (BOOL)wasPasted;
- (BOOL)wasUnarchived;
- (BOOL)wasUndoDelete;
- (BOOL)wasUnhidden;
- (BOOL)preserveChangeTracking;
- (BOOL)preserveParentStorage;
- (BOOL)uniqueSmartFields;
- (id)insertedTableInfos;
- (BOOL)wasMigratingStyles;
- (void)addDrawable:(id)a0;
- (void)addDrawables:(id)a0;
- (void)addInsertedTableInfo:(id)a0;
- (id)addedDrawables;

@end
