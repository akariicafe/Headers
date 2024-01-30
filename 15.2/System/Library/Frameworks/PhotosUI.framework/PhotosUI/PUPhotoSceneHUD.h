@class PXHUDView, NSURL;

@interface PUPhotoSceneHUD : UIView

@property (readonly, nonatomic) PXHUDView *hudView;
@property (readonly, nonatomic) NSURL *mdataURL;

- (id)initWithPhoto:(id)a0;
- (void)update;
- (void).cxx_destruct;

@end
