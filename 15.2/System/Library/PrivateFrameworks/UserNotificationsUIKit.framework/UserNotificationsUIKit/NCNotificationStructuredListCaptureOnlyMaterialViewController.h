@class MTMaterialView;

@interface NCNotificationStructuredListCaptureOnlyMaterialViewController : UIViewController

@property (readonly, nonatomic) MTMaterialView *materialView;

- (BOOL)_canShowWhileLocked;
- (void)loadView;

@end
