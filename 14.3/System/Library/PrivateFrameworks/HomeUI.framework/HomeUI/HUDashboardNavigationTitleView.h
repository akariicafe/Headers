@protocol HUDashboardNavigationTitleViewDelegate;

@interface HUDashboardNavigationTitleView : _UINavigationBarTitleView

@property (weak, nonatomic) id<HUDashboardNavigationTitleViewDelegate> delegate;
@property (nonatomic) double previousLargeTitleHeight;

- (void)contentDidChange;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
