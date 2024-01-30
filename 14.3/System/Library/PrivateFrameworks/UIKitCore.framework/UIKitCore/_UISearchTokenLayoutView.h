@class UIView;
@protocol _UIAtomTextViewAtomLayout;

@interface _UISearchTokenLayoutView : UIView

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } atomInsets;
@property (retain, nonatomic) UIView<_UIAtomTextViewAtomLayout> *delegateView;

+ (id)layoutViewWithDelegateView:(id)a0;

- (id)viewForLastBaselineLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDelegateView:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
