@class PGButtonView, NSString, PGDisplayLink, UILabel, PGControlsViewModel;

@interface PGPrerollIndicatorView : UIView <PGButtonViewDelegate>

@property (class, readonly, nonatomic) double preferredHeight;

@property (readonly, nonatomic) PGControlsViewModel *viewModel;
@property (readonly, nonatomic) UILabel *contentTypeLabel;
@property (readonly, nonatomic) PGButtonView *skipPrerollButtonView;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *timeRemainingText;
@property (nonatomic) struct CGSize { double width; double height; } labelSize;
@property (readonly, nonatomic) PGDisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (double)labelWidth;
- (void)_layoutContentTypeLabel;
- (void)_layoutSkipPrerollButton;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_subviewTransform;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonView:(id)a0 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonView:(id)a0 imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonView:(id)a0 titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)buttonViewDidReceiveTouchUpInside:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)updateValues;

@end
