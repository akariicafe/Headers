@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    struct __CFDictionary { } *mTableIDMap;
}

- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)autoUpdateSmartFields;
- (struct __CFDictionary { } *)tableIDMap;
- (void)setTableIDMap:(struct __CFDictionary { } *)a0;
- (BOOL)wasPasted;
- (BOOL)uniqueBookmarks;
- (BOOL)syncChanges;

@end
