@class UIView;

@interface CSTodayContentView : CSCoverSheetViewBase

@property (weak, nonatomic) UIView *navigationView;
@property (weak, nonatomic) UIView *todayView;
@property (nonatomic, getter=isBouncing) BOOL bouncing;

- (void).cxx_destruct;
- (void)_resetContentAfterEdgeBounce;
- (void)_adjustContentForEdgeBounce;
- (void)layoutSubviews;

@end
