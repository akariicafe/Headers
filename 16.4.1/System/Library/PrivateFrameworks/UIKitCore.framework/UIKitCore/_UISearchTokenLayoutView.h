@class UIView;
@protocol _UIAtomTextViewAtomLayout;

@interface _UISearchTokenLayoutView : UIView {
    double _verticalDelegateViewOrigin;
}

@property (retain, nonatomic) UIView<_UIAtomTextViewAtomLayout> *delegateView;
@property (nonatomic) BOOL isLastSearchToken;

- (id)initWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForLastBaselineLayout;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)layoutSubviews;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBounds;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })atomInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithDelegateView:(id)a0;
- (void)updateMaskLayerForAttachmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateMaskLayerForVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
