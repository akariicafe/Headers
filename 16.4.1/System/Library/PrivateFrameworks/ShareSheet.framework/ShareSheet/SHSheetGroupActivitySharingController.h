@class NSString, UIViewController;
@protocol GPGroupActivitySharingControllerHelpers, SHSheetGroupActivitySharingControllerDelegate;

@interface SHSheetGroupActivitySharingController : UIViewController

@property (retain, nonatomic) UIViewController<GPGroupActivitySharingControllerHelpers> *groupActivitySharingController;
@property (weak, nonatomic) id<SHSheetGroupActivitySharingControllerDelegate> delegate;
@property (copy, nonatomic) NSString *shareSheetSessionID;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithItemProvider:(id)a0;

@end
