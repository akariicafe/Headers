@class TabOverviewInterpolatedLocation, NSArray, TabOverview, UIView, TabOverviewItem, TabOverviewInterpolatedValue;
@protocol TabOverviewItemView;

@interface TabOverviewItemLayoutInfo : NSObject {
    NSArray *_interpolatedValues;
    BOOL _snapshotBlank;
    BOOL _closeSynchronized;
    BOOL _visibleInTabOverview;
    TabOverview *_tabOverview;
    TabOverviewItem *_tabOverviewItem;
    UIView *_borrowedContentView;
    double _borrowedContentHeaderHeight;
    UIView<TabOverviewItemView> *_itemView;
    double _alpha;
    double _snapshotAlpha;
    TabOverviewInterpolatedValue *_interpolatedSnapshotAlpha;
    TabOverviewInterpolatedValue *_interpolatedTitleAlpha;
    TabOverviewInterpolatedValue *_interpolatedTopBackdropHeight;
    TabOverviewInterpolatedValue *_interpolatedCornerRadius;
    TabOverviewInterpolatedValue *_interpolatedHeightTransitionPercent;
    UIView *_attachedView;
    double _titleAlpha;
    double _dimmingAlpha;
    TabOverviewInterpolatedLocation *_interpolatedLocation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _snapshotFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _attachedViewReferenceRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } _closeLastLayoutLocation;
    struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } _closeStartLocation;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
