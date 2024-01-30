@class STRootViewModelCoordinator, UIViewController, STIntroductionController;

@interface STChildSetupController : NSObject

@property (retain, nonatomic) STRootViewModelCoordinator *coordinator;
@property (retain, nonatomic) STIntroductionController *introductionController;
@property (copy) id /* block */ completionHandler;
@property (readonly, nonatomic) UIViewController *initialViewController;

- (id)initWithDSID:(id)a0;
- (void).cxx_destruct;
- (void)saveValuesForModel:(id)a0;

@end
