@class UIColor, NSString, NSArray, PKMultiHyperlinkView;

@interface PKFooterHyperlinkCell : UICollectionViewListCell {
    PKMultiHyperlinkView *_hyperLinkView;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSArray *sources;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } edgeInsets;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureHyperlinkViewIfNecessary;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
