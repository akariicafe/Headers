@protocol PUPhotoPickerRemoteNavigationControllerDelegate;

@interface PUPhotoPickerRemoteNavigationController : UINavigationController

@property (weak, nonatomic) id<PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerDelegate;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;

@end
