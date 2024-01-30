@class WFAction;
@protocol WFComponentNavigationContext;

@interface WFActionCustomView : UIView

@property (weak, nonatomic) WFAction *action;
@property (weak, nonatomic) id<WFComponentNavigationContext> navigationContext;

+ (double)preferredHeightForAction:(id)a0;

- (void).cxx_destruct;
- (void)didEnterReusePool;
- (void)willLeaveReusePool;

@end
