@class MTMaterialView;

@interface NCNotificationStructuredListCaptureOnlyMaterialViewController : UIViewController

@property (readonly, nonatomic) MTMaterialView *materialView;

- (void)loadView;
- (BOOL)_canShowWhileLocked;

@end
