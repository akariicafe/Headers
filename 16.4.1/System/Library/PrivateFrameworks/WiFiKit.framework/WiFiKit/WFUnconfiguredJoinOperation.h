@class UINavigationController, AirPortAssistantController, NSDictionary, UIViewController;

@interface WFUnconfiguredJoinOperation : WFOperation <AirPortAssistantControllerDelegate>

@property (retain, nonatomic) AirPortAssistantController *airportController;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) NSDictionary *parameters;

- (void)finish;
- (void)start;
- (void).cxx_destruct;
- (void)airPortAssistantComplete:(id)a0 result:(int)a1 context:(id)a2 animated:(BOOL)a3;
- (id)initWithParameters:(id)a0 rootViewController:(id)a1;

@end
