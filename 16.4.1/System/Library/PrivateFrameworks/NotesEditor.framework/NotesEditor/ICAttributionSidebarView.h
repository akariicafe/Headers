@class TTTextEditFilter, ICAttributionViewConfiguration, NSMapTable, ICSelectorDelayer, ICAttributionLayoutManager, ICTextView, ICAuthorHighlightsUpdater;

@interface ICAttributionSidebarView : UIView

@property (retain, nonatomic) NSMapTable *attributionViewMap;
@property (readonly, nonatomic) ICSelectorDelayer *reloadAttributionsDelayer;
@property (retain, nonatomic) ICAttributionViewConfiguration *focusedAttributionViewConfiguration;
@property (retain, nonatomic) ICAttributionLayoutManager *attributionLayoutManager;
@property (nonatomic) BOOL didExpandSidebar;
@property (weak, nonatomic) ICTextView *textView;
@property (weak, nonatomic) ICAuthorHighlightsUpdater *authorHighlightsUpdater;
@property (readonly, nonatomic) double previewContentWidth;
@property (readonly, nonatomic) double fullContentWidth;
@property (nonatomic) double visibleContentWidth;
@property (copy, nonatomic) TTTextEditFilter *filter;

- (BOOL)accessibilityElementsHidden;
- (void)reload;
- (void)willEnterForeground:(id)a0;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)a0;
- (void)analyticsSessionWillEnd:(id)a0;
- (void)focusAttributionView:(id)a0;
- (void)reloadAttributions;
- (void)reloadAttributionsWithCompletion:(id /* block */)a0;
- (void)removeAllAttributionViews;
- (void)renderAttributionView:(id)a0;
- (void)renderAttributions;
- (void)scrollToRangeIfNeeded:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setFilter:(id)a0 animated:(BOOL)a1;
- (void)setVisibleContentWidth:(double)a0 isGestureActive:(BOOL)a1;
- (void)textViewLayoutDidChange:(id)a0;
- (void)unfocusAttributionDetails;

@end
