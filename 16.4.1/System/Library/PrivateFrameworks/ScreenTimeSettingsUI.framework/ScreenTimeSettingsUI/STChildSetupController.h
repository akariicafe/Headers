@class STRootViewModelCoordinator, UIViewController, STIntroductionController;

@interface STChildSetupController : NSObject

@property (retain, nonatomic) STRootViewModelCoordinator *coordinator;
@property (retain, nonatomic) STIntroductionController *introductionController;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ completionHandlerWithIntroductionModel;
@property (readonly, nonatomic) UIViewController *initialViewController;

- (id)initWithDSID:(id)a0;
- (void).cxx_destruct;
- (id)initOnChildDeviceWithDSID:(id)a0 childAge:(id)a1 childName:(id)a2;
- (id)initWithDSID:(id)a0 updateExistingSettings:(BOOL)a1;
- (id)initWithDSID:(id)a0 updateExistingSettings:(BOOL)a1 childAge:(id)a2 childName:(id)a3;
- (id)initOnChildDeviceWithDSID:(id)a0 childAge:(id)a1;
- (id)initWithDSID:(id)a0 isChildDevice:(BOOL)a1;
- (id)initWithDSID:(id)a0 isChildDevice:(BOOL)a1 childAge:(id)a2 childName:(id)a3 updateExistingSettings:(BOOL)a4;
- (id)initWithDSID:(id)a0 isChildDevice:(BOOL)a1 updateExistingSettings:(BOOL)a2;
- (void)saveValuesForModel:(id)a0;

@end
