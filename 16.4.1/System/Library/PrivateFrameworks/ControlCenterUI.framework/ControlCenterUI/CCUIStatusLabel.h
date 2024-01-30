@class MTVisualStylingProvider;

@interface CCUIStatusLabel : UILabel {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) unsigned long long verticalAlignment;

- (void)_contentSizeCategoryDidChange;
- (void)didMoveToWindow;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateVisualStyling;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
