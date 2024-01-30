@class _UISaveToCameraRollSaveItemsController;

@interface UISaveToCameraRollActivity : UIActivity

@property (nonatomic) long long imageCount;
@property (nonatomic) long long livePhotoCount;
@property (nonatomic) long long videoCount;
@property (retain, nonatomic) _UISaveToCameraRollSaveItemsController *saveController;

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)_activityImage;
- (void).cxx_destruct;
- (id /* block */)_backgroundPreheatBlock;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
