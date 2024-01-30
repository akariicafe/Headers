@interface PhotosUIApps.PUXStoryColorGradeEditorContentLayout : PXGDecoratingLayout <PXGSelectionDecorationSource> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ overlayLayout;
}

- (id)selectedSpriteIndexesInLayout:(id)a0;
- (id)initWithDecoratedLayout:(id)a0;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)selectionDecorationStyleInLayout:(id)a0;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
