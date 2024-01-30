@class UIViewController, NSString, _EXHostSession, _EXHostViewControllerConfiguration;
@protocol _EXHostViewControllerDelegate;

@interface _EXHostViewController : UIViewController <_EXHostSessionDelegate, _EXConnectionCreating>

@property (retain) _EXHostSession *session;
@property (retain) UIViewController *embededViewController;
@property (weak, nonatomic) id<_EXHostViewControllerDelegate> delegate;
@property (copy, nonatomic) _EXHostViewControllerConfiguration *configuration;
@property (retain, nonatomic) UIViewController<_EXHostViewControllerDelegate> *placeholderViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)hostSessionDidInvalidate:(id)a0;
- (void)hostSessionDidPrepareForHosting:(id)a0;
- (void)hostSessionViewControllerReady:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)embedViewController:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)loadView;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
