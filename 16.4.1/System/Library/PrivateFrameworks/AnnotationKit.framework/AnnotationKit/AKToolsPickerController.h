@class UINavigationController, UIViewController, AKController;

@interface AKToolsPickerController : NSObject

@property (retain, nonatomic) UINavigationController *navController;
@property (retain, nonatomic) UIViewController *toolsListController;
@property (weak) AKController *controller;

- (id)initWithController:(id)a0;
- (void).cxx_destruct;

@end
