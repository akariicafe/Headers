@class STRootViewModelCoordinator, UIViewController, STIntroductionController;

@interface STChildSetupController : NSObject

@property (retain, nonatomic) STRootViewModelCoordinator *coordinator;
@property (retain, nonatomic) STIntroductionController *introductionController;
@property (copy) id /* block */ completionHandler;
@property (readonly, nonatomic) UIViewController *initialViewController;

- (void).cxx_destruct;
- (id)initWithDSID:(id)a0;
- (void)saveValuesForModel:(id)a0;

@end
