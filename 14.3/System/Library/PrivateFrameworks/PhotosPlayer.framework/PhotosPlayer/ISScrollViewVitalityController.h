@class ISVisibilityOffsetHelper, NSHashTable, UIScrollView, NSDate;

@interface ISScrollViewVitalityController : NSObject

@property (weak, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView;
@property (readonly, nonatomic) NSHashTable *_playerViews;
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges;
@property (nonatomic, getter=isScrolling) BOOL scrolling;
@property (nonatomic, getter=isDecelerating) BOOL decelerating;
@property (nonatomic) BOOL hasTargetContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (readonly, nonatomic) ISVisibilityOffsetHelper *visibilityOffsetHelper;
@property (readonly, nonatomic) BOOL canPerformVitality;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)addPlayerView:(id)a0;
- (void)removePlayerView:(id)a0;
- (void)didLayoutPlayerViews;
- (void)canPerformVitalityDidChange;
- (id)_newVitalityFilter;
- (void)_updateVitalityFilters;

@end
