@class NSString, NSTimer, UIImageView, UIActivityIndicatorView;

@interface EXPlaceholderViewController : UIViewController <_EXHostViewControllerDelegate>

@property (retain) UIActivityIndicatorView *activityView;
@property (weak) NSTimer *timer;
@property (retain) UIImageView *completeIcon;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)hostViewController:(id)a0 didBeginHosting:(id)a1;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)hostViewController:(id)a0 didPrepareToHost:(id)a1;

@end
