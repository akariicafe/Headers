@class NSString, SKUIEditorialLinkView, SKUITextBoxView;

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate> {
    double _linkSpacing;
    SKUIEditorialLinkView *_linkView;
    SKUITextBoxView *_textBoxView;
    double _totalHeight;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) SKUITextBoxView *textBoxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_linkView;
- (id)initWithParentView:(id)a0;
- (void)_initContentInset;
- (id)_textBoxView;
- (void)applyEditorialLayout:(id)a0 withOrientation:(long long)a1 expanded:(BOOL)a2;
- (void)editorialLinkView:(id)a0 didSelectLink:(id)a1;
- (id)initWithCollectionViewCell:(id)a0;
- (void)resetContentInset;
- (void)setColoringWithColorScheme:(id)a0;

@end
