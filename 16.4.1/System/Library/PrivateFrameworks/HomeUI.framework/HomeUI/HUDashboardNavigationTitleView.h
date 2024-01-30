@protocol HUDashboardNavigationTitleViewDelegate;

@interface HUDashboardNavigationTitleView : _UINavigationBarTitleView

@property (weak, nonatomic) id<HUDashboardNavigationTitleViewDelegate> delegate;
@property (nonatomic) double previousLargeTitleHeight;

- (id)initWithDelegate:(id)a0;
- (void)contentDidChange;
- (void).cxx_destruct;

@end
