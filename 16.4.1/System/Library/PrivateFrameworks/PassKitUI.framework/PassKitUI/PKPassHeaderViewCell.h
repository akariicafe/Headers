@class PKPass, PKPassHeaderView;
@protocol PKPassLibraryDataProvider;

@interface PKPassHeaderViewCell : UICollectionViewListCell {
    PKPassHeaderView *_passHeaderView;
}

@property (retain, nonatomic) PKPass *pass;
@property (retain, nonatomic) id<PKPassLibraryDataProvider> passLibraryOverride;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configurePassHeader;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
