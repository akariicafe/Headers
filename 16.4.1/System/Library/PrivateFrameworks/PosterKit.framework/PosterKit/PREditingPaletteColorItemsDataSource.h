@class NSArray, NSString, PREditorColorPickerConfiguration, PREditingColorVariationStore;

@interface PREditingPaletteColorItemsDataSource : NSObject <PREditingColorItemsDataSource>

@property (retain, nonatomic) PREditorColorPickerConfiguration *configuration;
@property (retain, nonatomic) PREditingColorVariationStore *variationStore;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (void)buildItems;
- (id)colorItemForIndex:(unsigned long long)a0;
- (id)firstColorItemPassingTest:(id /* block */)a0;
- (unsigned long long)indexForItem:(id)a0;
- (id)initWithConfiguration:(id)a0 variationStore:(id)a1;

@end
