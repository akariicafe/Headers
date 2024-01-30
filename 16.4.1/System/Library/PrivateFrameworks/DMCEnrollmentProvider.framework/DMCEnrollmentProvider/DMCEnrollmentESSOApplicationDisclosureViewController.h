@class NSArray;
@protocol DMCEnrollmentESSOApplicationDisclosureViewControllerDelegate;

@interface DMCEnrollmentESSOApplicationDisclosureViewController : DMCEnrollmentTemplateTableViewController

@property (weak) id<DMCEnrollmentESSOApplicationDisclosureViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *requiredEntitlements;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupNavigationBar;
- (id)initWithDelegate:(id)a0 lockupRequest:(id)a1 lockupViewGroup:(id)a2 requiredEntitlements:(id)a3;
- (void)leftBarButtonTapped:(id)a0;

@end
