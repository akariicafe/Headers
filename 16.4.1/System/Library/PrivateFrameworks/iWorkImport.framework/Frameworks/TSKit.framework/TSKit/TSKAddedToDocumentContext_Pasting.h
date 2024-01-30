@class NSMutableArray;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    NSMutableArray *mAddedDrawables;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)autoUpdateSmartFields;
- (BOOL)syncChanges;
- (BOOL)wasPasted;
- (BOOL)uniqueSmartFields;
- (void)addDrawable:(id)a0;
- (void)addDrawables:(id)a0;
- (id)addedDrawables;

@end
