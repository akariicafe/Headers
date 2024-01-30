@class PXContentFilterState, UILabel, UIButton;
@protocol PXContentFilterFooterViewDelegate;

@interface PXContentFilterFooterView : UIView {
    UILabel *_captionLabel;
    UIButton *_filterButton;
}

@property (weak, nonatomic) id<PXContentFilterFooterViewDelegate> delegate;
@property (retain, nonatomic) PXContentFilterState *filterState;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_showFilterUI:(id)a0;

@end
