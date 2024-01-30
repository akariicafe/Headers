@class UIView;

@interface CSTodayContentView : CSCoverSheetViewBase

@property (weak, nonatomic) UIView *navigationView;
@property (weak, nonatomic) UIView *todayView;
@property (nonatomic, getter=isBouncing) BOOL bouncing;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_adjustContentForEdgeBounce;
- (void)_resetContentAfterEdgeBounce;

@end
