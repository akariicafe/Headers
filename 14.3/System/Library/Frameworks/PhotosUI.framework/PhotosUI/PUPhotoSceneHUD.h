@class PXHUDView, NSURL;

@interface PUPhotoSceneHUD : UIView

@property (readonly, nonatomic) PXHUDView *hudView;
@property (readonly, nonatomic) NSURL *mdataURL;

- (void).cxx_destruct;
- (void)update;
- (id)initWithPhoto:(id)a0;

@end
