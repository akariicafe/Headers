@class TLKImagesView, NSMapTable, NSString, NSMutableArray;

@interface SearchUIGridCardSectionView : SearchUICardSectionView <TLKImagesViewDelegate, UIContextMenuInteractionDelegate>

@property (retain, nonatomic) TLKImagesView *contentView;
@property (copy, nonatomic) NSMapTable *imageToRowModelMap;
@property (retain) NSMutableArray *previewTargetDummyViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithRowModel:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)imagesView:(id)a0 didSelectImage:(id)a1;
- (id)setupContentView;
- (id)imageViewForInteraction:(id)a0;
- (id)imagesInGrid:(id)a0;

@end
