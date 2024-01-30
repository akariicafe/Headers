@class NSArray, NSString, MUScrollableStackView, MURatingsCallToActionViewModel, NSMutableArray;
@protocol MUScrollAnalyticActionObserving, MUPlaceRibbonViewDelegate;

@interface MUPlaceRibbonView : UIView <UIScrollViewDelegate> {
    MUScrollableStackView *_contentStackView;
    MURatingsCallToActionViewModel *_callToActionViewModel;
    NSMutableArray *_focusItems;
    struct CGPoint { double x; double y; } _beginAnalyticsScrollingPoint;
}

@property (weak, nonatomic) id<MUScrollAnalyticActionObserving> analyticsDelegate;
@property (weak, nonatomic) id<MUPlaceRibbonViewDelegate> delegate;
@property (retain, nonatomic) NSArray *viewModels;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) NSArray *focusItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)_setupStackView;
- (void)reloadVisibility;
- (id)_visibleRibbonItemViews;

@end
