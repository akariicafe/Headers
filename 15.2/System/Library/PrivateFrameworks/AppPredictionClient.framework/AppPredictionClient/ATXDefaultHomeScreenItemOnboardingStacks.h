@class ATXDefaultWidgetStack, NSArray;

@interface ATXDefaultHomeScreenItemOnboardingStacks : NSObject

@property (readonly, nonatomic) ATXDefaultWidgetStack *stack1;
@property (readonly, nonatomic) ATXDefaultWidgetStack *stack2;
@property (readonly, nonatomic) NSArray *sortedThirdPartyWidgets;

- (void).cxx_destruct;
- (id)initWithOnboardingStack1:(id)a0 stack2:(id)a1 sortedThirdPartyWidgets:(id)a2;

@end
