@class SidecarService, ICDocCamImageCache, SidecarRequest;
@protocol ICRemoteDocCamViewControllerDelegate;

@interface ICRemoteDocCamViewController : UIViewController

@property (retain, nonatomic) SidecarService *sidecarService;
@property (retain, nonatomic) SidecarRequest *sidecarRequest;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (weak, nonatomic) id<ICRemoteDocCamViewControllerDelegate> delegate;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)makeRequestToDevice:(id)a0;
- (id)infoForArchiveSidecarItems:(id)a0;
- (id)infoForImageSidecarItems:(id)a0;
- (id)infoForSidecarItems:(id)a0;
- (id)initWithImageCache:(id)a0;
- (id)makeAlertControllerForError:(id)a0;
- (id)makeDevicesAlertController;
- (void)sidecarRequestDidFinish;

@end
