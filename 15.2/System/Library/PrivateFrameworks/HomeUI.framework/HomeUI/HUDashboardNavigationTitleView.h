@protocol HUDashboardNavigationTitleViewDelegate;

@interface HUDashboardNavigationTitleView : _UINavigationBarTitleView

@property (weak, nonatomic) id<HUDashboardNavigationTitleViewDelegate> delegate;
@property (nonatomic) double previousLargeTitleHeight;

- (void)contentDidChange;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
