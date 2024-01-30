@class _UISaveToCameraRollSaveItemsController;

@interface UISaveToCameraRollActivity : UIActivity

@property (nonatomic) long long imageCount;
@property (nonatomic) long long livePhotoCount;
@property (nonatomic) long long videoCount;
@property (retain, nonatomic) _UISaveToCameraRollSaveItemsController *saveController;

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (BOOL)_canSaveImages;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)_activityImage;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
