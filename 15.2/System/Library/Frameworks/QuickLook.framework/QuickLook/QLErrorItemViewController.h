@class NSError, QLItem;

@interface QLErrorItemViewController : QLItemViewController

@property (retain) QLItem *previewItem;
@property (retain, nonatomic) NSError *error;

- (void)loadView;
- (void).cxx_destruct;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (id)errorView;
- (void)_updateLabelsWithCurrentErrorIfNeeded;

@end
