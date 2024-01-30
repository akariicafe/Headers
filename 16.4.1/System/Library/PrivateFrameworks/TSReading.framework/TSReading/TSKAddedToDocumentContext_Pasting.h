@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    struct __CFDictionary { } *mTableIDMap;
}

- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)uniqueBookmarks;
- (BOOL)autoUpdateSmartFields;
- (void)setTableIDMap:(struct __CFDictionary { } *)a0;
- (BOOL)syncChanges;
- (struct __CFDictionary { } *)tableIDMap;
- (BOOL)wasPasted;

@end
