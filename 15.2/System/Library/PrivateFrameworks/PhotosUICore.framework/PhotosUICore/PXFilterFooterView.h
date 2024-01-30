@class PXContentFilterState, UILabel, UIButton;
@protocol PXFilterFooterViewDelegate;

@interface PXFilterFooterView : UIView {
    UILabel *_captionLabel;
    UIButton *_filterButton;
}

@property (weak, nonatomic) id<PXFilterFooterViewDelegate> delegate;
@property (retain, nonatomic) PXContentFilterState *contentFilterState;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_showFilterUI:(id)a0;
- (void)_updateDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 libraryType:(long long)a1;

@end
