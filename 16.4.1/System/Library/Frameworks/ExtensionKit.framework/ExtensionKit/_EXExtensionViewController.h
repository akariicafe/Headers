@class UIViewController, _EXViewControllerSceneConfiguration;

@interface _EXExtensionViewController : UIViewController <_EXConnectionHandler>

@property (readonly) UIViewController *contentViewController;
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)makeContentViewController;

@end
