@class SiriUIContentPlatterDarkenMaskView, _SiriUIContentPlatterScrollView, PLPlatterView, NSArray, SiriUIPanDismissalGestureRecognizer, NSString;
@protocol SiriUIContentPlatterViewDelegate;

@interface SiriUIContentPlatterView : UIView <UIScrollViewDelegate, _SiriUIContentPlatterScrollViewDelegate, SiriUIDarkening>

@property (retain, nonatomic, getter=_scrollView) _SiriUIContentPlatterScrollView *scrollView;
@property (retain, nonatomic, getter=_darkenMaskView) SiriUIContentPlatterDarkenMaskView *darkenMaskView;
@property (nonatomic, getter=_platterNeedsLayout, setter=_setPlatterNeedsLayout:) BOOL platterNeedsLayout;
@property (nonatomic, getter=_shouldAllowDismissalWhenScrollable, setter=_setShouldAllowDismissalWhileScrollable:) BOOL shouldAllowDismissalWhileScrollable;
@property (nonatomic, getter=_currentContentOffset, setter=_setCurrentContentOffset:) double currentContentOffset;
@property (retain, nonatomic) PLPlatterView *platterView;
@property (weak, nonatomic) id<SiriUIContentPlatterViewDelegate> delegate;
@property (retain, nonatomic) NSArray *contentViews;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) SiriUIPanDismissalGestureRecognizer *dismissalGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double darkenIntensity;

- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsLayout;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)shouldAllowSimultaneousGestureRecognizersForScrollView:(id)a0;
- (void)_updateContentFullyScrolled;
- (id)contentPlatterScrollView;

@end
