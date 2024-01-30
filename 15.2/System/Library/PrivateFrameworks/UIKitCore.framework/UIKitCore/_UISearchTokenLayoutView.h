@class UIView;
@protocol _UIAtomTextViewAtomLayout;

@interface _UISearchTokenLayoutView : UIView {
    double _verticalDelegateViewOrigin;
}

@property (retain, nonatomic) UIView<_UIAtomTextViewAtomLayout> *delegateView;
@property (nonatomic) BOOL isLastSearchToken;

- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (id)viewForLastBaselineLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)isEnabled;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)updateMaskLayerForAttachmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })atomInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBounds;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithDelegateView:(id)a0;

@end
