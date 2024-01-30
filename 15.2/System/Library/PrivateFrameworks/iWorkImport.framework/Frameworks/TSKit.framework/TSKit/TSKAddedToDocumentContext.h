@class NSMutableArray;
@protocol TSKMultiTableRemapping;

@interface TSKAddedToDocumentContext : NSObject {
    NSMutableArray *mInsertedTableInfos;
}

@property (retain) id<TSKMultiTableRemapping> multiTableRemapper;

+ (id)defaultContext;
+ (id)movingContext;
+ (id)unhidingContext;
+ (id)unarchivingContext;
+ (id)importingContextWithImporterID:(id)a0;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)dragMoveContext;
+ (id)dragCopyContext;
+ (id)insertingPrototypeContext;
+ (id)undoDeleteContext;
+ (id)exportFootnoteContext;
+ (id)moveSectionContext;
+ (id)exportMergedHeaderContext;
+ (id)preserveParentStorageContext;
+ (id)migrateStylesContext;
+ (id)textBoxLinkageContext;

- (void).cxx_destruct;
- (BOOL)wasMoved;
- (void)addDrawable:(id)a0;
- (BOOL)wasUnarchived;
- (BOOL)autoUpdateSmartFields;
- (id)importerID;
- (BOOL)wasPasted;
- (BOOL)uniqueBookmarks;
- (BOOL)syncChanges;
- (BOOL)matchStyle;
- (BOOL)wasDragOperation;
- (BOOL)wasDragMoved;
- (id)undoContext;
- (BOOL)wasUnhidden;
- (BOOL)wasUndoDelete;
- (BOOL)wasImported;
- (BOOL)invokeDOLC;
- (id)insertedTableInfos;
- (BOOL)wasMigratingStyles;
- (void)addDrawables:(id)a0;
- (id)addedDrawables;
- (BOOL)preserveChangeTracking;
- (BOOL)preserveParentStorage;
- (void)addInsertedTableInfo:(id)a0;

@end
