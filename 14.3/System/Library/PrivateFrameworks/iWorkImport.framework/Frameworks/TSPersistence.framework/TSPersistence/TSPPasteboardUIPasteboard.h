@class NSArray, NSMutableDictionary;

@interface TSPPasteboardUIPasteboard : TSPPasteboard {
    NSArray *_cachedPasteboardTypes;
    NSMutableDictionary *_pasteboardItemIndexCache;
    unsigned long long _pasteboardItemCount;
    long long _cachedChangeCount;
}

- (void)setString:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)URLs;
- (id)string;
- (id)dataForPasteboardType:(id)a0;
- (id)pasteboardTypes;
- (id)valueForPasteboardType:(id)a0;
- (id)pasteboardTypesForItemSet:(id)a0;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)strings;
- (long long)clearContents;
- (oneway void)invalidate;
- (id)initWithGeneralPasteboard;
- (id)initWithPasteboardName:(id)a0 create:(BOOL)a1;
- (id)initWithUniquePasteboardName;
- (id)initWithNativePasteboard:(id)a0;
- (void)addItems:(id)a0 isSmartCopy:(BOOL)a1;
- (id)richTextStrings;
- (BOOL)canLoadItemsOfClass:(Class)a0;
- (id)stringForPasteboardType:(id)a0;
- (void)addData:(id)a0 forPasteboardType:(id)a1;
- (id)stringsForPasteboardType:(id)a0 inItemSet:(id)a1;
- (unsigned long long)pasteboardItemMaxSize;
- (void)addPasteboardItem:(id)a0;
- (void)addPasteboardItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)addPasteboardItemIndex:(unsigned long long)a0 forType:(id)a1;
- (void)invalidatePasteboardCache;
- (void)invalidatePasteboardCacheIfNeeded;
- (void)updateCachedChangeCount;
- (void)addPasteboardItemForObject:(id)a0 type:(id)a1;
- (id)propertyListForValue:(id)a0;
- (void)reloadPasteboardItemIndexCacheIfNeeded;

@end
