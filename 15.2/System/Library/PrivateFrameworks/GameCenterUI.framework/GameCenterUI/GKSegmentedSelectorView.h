@class UISegmentedControl, NSLayoutConstraint;

@interface GKSegmentedSelectorView : GKHeaderWithUnderlineView

@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (nonatomic) id target;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)drawsUnderline;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)pinningStateChangedTo:(BOOL)a0;

@end
