@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {
    struct __CFDictionary { } *mTableIDMap;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)autoUpdateSmartFields;
- (struct __CFDictionary { } *)tableIDMap;
- (void)setTableIDMap:(struct __CFDictionary { } *)a0;
- (BOOL)wasPasted;
- (BOOL)uniqueBookmarks;
- (BOOL)syncChanges;

@end
