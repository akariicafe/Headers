@class NSMutableArray;
@protocol TSKMultiTableRemapping;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
    id<TSKMultiTableRemapping> mMultiTableRemapper;
}

- (void).cxx_destruct;
- (id)description;
- (void)addDrawable:(id)a0;
- (BOOL)autoUpdateSmartFields;
- (BOOL)wasPasted;
- (BOOL)uniqueBookmarks;
- (BOOL)syncChanges;
- (void)addDrawables:(id)a0;
- (id)addedDrawables;
- (id)multiTableRemapper;
- (void)setMultiTableRemapper:(id)a0;

@end
