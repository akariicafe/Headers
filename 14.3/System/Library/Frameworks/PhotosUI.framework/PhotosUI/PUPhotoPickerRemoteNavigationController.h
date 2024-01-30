@protocol PUPhotoPickerRemoteNavigationControllerDelegate;

@interface PUPhotoPickerRemoteNavigationController : UINavigationController

@property (weak, nonatomic) id<PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerDelegate;

- (void).cxx_destruct;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
