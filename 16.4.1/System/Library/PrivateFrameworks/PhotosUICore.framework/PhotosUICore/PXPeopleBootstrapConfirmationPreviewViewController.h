@class PHAsset, PHPerson;

@interface PXPeopleBootstrapConfirmationPreviewViewController : UIViewController

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) BOOL useLowMemoryMode;
@property (nonatomic) int requestID;

- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithPerson:(id)a0 keyAsset:(id)a1 useLowMemoryMode:(BOOL)a2;

@end
