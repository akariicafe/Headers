@class NSArray;

@interface CNPhotoPickerProviderSuggestionsGroup : CNPhotoPickerProviderGroup {
    NSArray *_addItems;
}

- (void).cxx_destruct;
- (id)addItems;
- (long long)addProviderItem:(id)a0;
- (id)dedupedSuggestionItemsGroupedByProvider;
- (id)defaultMonogramItem;
- (long long)indexForDefaultMonogram;
- (id)initWithProviders:(id)a0 environment:(id)a1 allowAddItem:(BOOL)a2;
- (id)itemsForProviderIdentifier:(id)a0;
- (void)loadAvailablePaddingItems;
- (unsigned long long)maxRecentsAndMonogramsCount;
- (id)paddedDisplayItems:(id)a0;
- (void)prepareDisplayItems:(id)a0;
- (void)providerItemDidUpdate:(id)a0;
- (id)providerItems:(id)a0 withMaxRecentsAndMonogramsCount:(unsigned long long)a1;
- (id)providerOfClass:(Class)a0;
- (void)reloadMonogramProviderGroupWithVisualIdentity:(id)a0 size:(struct CGSize { double x0; double x1; })a1 RTL:(BOOL)a2;
- (long long)removeProviderItem:(id)a0;
- (void)setAddItems:(id)a0;

@end
