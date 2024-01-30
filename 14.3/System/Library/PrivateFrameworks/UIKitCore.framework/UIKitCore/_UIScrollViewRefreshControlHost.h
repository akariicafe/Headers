@class UIScrollView, NSString;

@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting> {
    UIScrollView *_scrollView;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}

@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
@property (readonly, weak) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)incrementInsetHeight:(double)a0;
- (void)decrementInsetHeight:(double)a0;
- (void)refreshControl:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2;
- (id)initWithScrollView:(id)a0;

@end
