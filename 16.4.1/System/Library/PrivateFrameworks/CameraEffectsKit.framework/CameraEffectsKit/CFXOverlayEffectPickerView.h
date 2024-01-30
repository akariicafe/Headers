@class JTCollectionView, NSString, JTCollectionViewFlowLayout, UIView;

@interface CFXOverlayEffectPickerView : CFXEffectPickerView <JTCollectionViewDelegate>

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) JTCollectionView *collectionView;
@property (retain, nonatomic) JTCollectionViewFlowLayout *collectionViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)effectPickerCellReuseIdentifier;
- (void)subviewsDidLoad;
- (void)didResizeCollectionViewToSize:(struct CGSize { double x0; double x1; })a0;
- (id)effectPickerCellNibName;
- (id)effectPickerNibName;
- (void)updateThumbnailColumnSizeForCollectionSize;

@end
