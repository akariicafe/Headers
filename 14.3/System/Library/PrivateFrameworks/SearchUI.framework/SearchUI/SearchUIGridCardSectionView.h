@class NSString, TLKImagesView, NSMapTable;

@interface SearchUIGridCardSectionView : SearchUICardSectionView <TLKImagesViewDelegate>

@property (retain, nonatomic) TLKImagesView *contentView;
@property (copy, nonatomic) NSMapTable *imageToSectionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)imagesInGrid:(id)a0;
- (id)setupContentView;
- (void)imagesView:(id)a0 didSelectImage:(id)a1;

@end
