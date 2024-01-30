@class NSMutableDictionary, NSString, UIView, SBIconListView, UIScrollView;

@interface SBTodayIconListLayoutDelegate : NSObject <SBIconListLayoutDelegate>

@property (retain, nonatomic) NSMutableDictionary *catchupProperties;
@property (retain, nonatomic) NSMutableDictionary *catchupTimers;
@property (readonly, nonatomic) double collapseHeight;
@property (readonly, nonatomic) double distanceToApex;
@property (readonly, nonatomic) double revealProgressMaxTranslation;
@property (readonly, weak, nonatomic) SBIconListView *iconListView;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic, getter=isCarouselLayout) BOOL carouselLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } carouselInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } additionalLayoutInsets;
@property (nonatomic, getter=isRevealed) BOOL revealed;
@property (nonatomic) double revealProgress;
@property (nonatomic) double dismissProgress;
@property (nonatomic, getter=isVisuallyRevealed) BOOL visuallyRevealed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })iconListView:(id)a0 centerForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1 metrics:(id)a2 proposedCenter:(struct CGPoint { double x0; double x1; })a3;
- (struct CGPoint { double x0; double x1; })iconListView:(id)a0 originForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1 metrics:(id)a2 proposedOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)_reorderSubviewsForCarouselLayoutInListView:(id)a0;
- (unsigned long long)iconListView:(id)a0 rowAtPoint:(struct CGPoint { double x0; double x1; })a1 metrics:(id)a2 proposedRow:(unsigned long long)a3;
- (void)setVisuallyRevealed:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithIconListView:(id)a0;
- (struct CGSize { double x0; double x1; })iconListView:(id)a0 sizeThatFits:(struct CGSize { double x0; double x1; })a1 metrics:(id)a2 proposedSize:(struct CGSize { double x0; double x1; })a3;
- (struct SBTodayIconListLayoutAttributes { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; double x3; })layoutAttributesForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 metrics:(id)a1 adjustedForRevealProgress:(BOOL)a2;
- (double)unadjustedOriginYForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (void)iconListViewDidLayoutIcons:(id)a0;
- (void).cxx_destruct;
- (double)_iconListView:(id)a0 originYForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1 metrics:(id)a2 adjustedForRevealProgress:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unadjustedBoundsForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (void)_layoutFocusGuideViewsInListView:(id)a0;
- (void)iconListView:(id)a0 willLayoutIconView:(id)a1;

@end
