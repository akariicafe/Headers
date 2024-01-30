@class NSArray;

@interface CNPhotoPickerProviderSuggestionsGroup : CNPhotoPickerProviderGroup {
    NSArray *_addItems;
}

- (id)initWithProviders:(id)a0 environment:(id)a1 allowAddItem:(BOOL)a2;
- (id)addItems;
- (void)providerItemDidUpdate:(id)a0;
- (void)prepareDisplayItems:(id)a0;
- (id)itemsForProviderIdentifier:(id)a0;
- (long long)addProviderItem:(id)a0;
- (long long)removeProviderItem:(id)a0;
- (void).cxx_destruct;
- (id)providerOfClass:(Class)a0;
- (void)loadAvailablePaddingItems;
- (long long)indexForDefaultMonogram;
- (id)dedupedSuggestionItemsGroupedByProvider;
- (id)paddedDisplayItems:(id)a0;
- (id)providerItems:(id)a0 withMaxRecentsAndMonogramsCount:(unsigned long long)a1;
- (unsigned long long)maxRecentsAndMonogramsCount;
- (id)defaultMonogramItem;
- (void)reloadMonogramProviderGroupWithVisualIdentity:(id)a0 size:(struct CGSize { double x0; double x1; })a1 RTL:(BOOL)a2;
- (void)setAddItems:(id)a0;

@end
