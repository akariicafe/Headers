@class HUCameraRecordingOptionsItemManager, HUCameraSettingsModuleController, NSString;

@interface HUCameraRecordingOptionsTableViewController : HUItemTableViewController <UITextViewDelegate>

@property (weak, nonatomic) HUCameraRecordingOptionsItemManager *detailsItemManager;
@property (retain, nonatomic) HUCameraSettingsModuleController *cameraSettingsModuleController;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dismissTextViewController;
- (id)initWithServiceLikeItem:(id)a0;
- (id)itemModuleControllers;

@end
