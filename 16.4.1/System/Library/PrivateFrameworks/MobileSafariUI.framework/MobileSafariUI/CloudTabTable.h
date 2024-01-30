@class WBSCloudTab, NSArray, NSString, WBSCloudTabDevice, CloudTabHeaderView, ViewReuseManager;
@protocol CloudTabTableDelegate;

@interface CloudTabTable : UIView <CloudTabItemViewDelegate, ViewReuseManagerDelegate> {
    long long _style;
    WBSCloudTabDevice *_device;
    CloudTabHeaderView *_headerView;
    unsigned long long _indexOfFocusedTab;
    ViewReuseManager *_itemViewReuseManager;
    struct _NSRange { unsigned long long location; unsigned long long length; } _trackedItemViewRange;
}

@property (weak, nonatomic) id<CloudTabTableDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) double contentMinimumY;
@property (retain, nonatomic) WBSCloudTab *focusedTab;
@property (nonatomic) double offsetAboveFocusedTab;
@property (nonatomic) double offsetBelowFocusedTab;
@property (copy, nonatomic) id /* block */ layoutAnimator;
@property (readonly, nonatomic) NSArray *displayedTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_didSelectItemView:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_visibleItemRange;
- (void)_layoutItemView:(id)a0 representingItemAtIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForItemAtIndex:(unsigned long long)a0;
- (BOOL)_shouldShowSeparatorForItemViewAtIndex:(unsigned long long)a0;
- (void)cloudTabItemViewDeleteButtonWasTapped:(id)a0;
- (void)cloudTabItemViewDidFinishEditing:(id)a0;
- (void)cloudTabItemViewDidStartEditing:(id)a0;
- (void)cloudTabItemViewHighlightStateDidChange:(id)a0;
- (id)initWithDevice:(id)a0 style:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForTab:(id)a0;
- (BOOL)updateDisplayedTabs;
- (void)viewReuseManager:(id)a0 prepareView:(id)a1 toRepresentObjectAtIndex:(unsigned long long)a2;
- (void)viewReuseManager:(id)a0 willRecycleView:(id)a1;

@end
