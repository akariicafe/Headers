@class CKMediaObject, UIViewController;

@interface CKSaveToPhotosActivity : UIActivity

@property (readonly, nonatomic) CKMediaObject *mediaObject;
@property (readonly, weak, nonatomic) UIViewController *presenterViewController;

+ (long long)activityCategory;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithMediaObject:(id)a0 presenterViewController:(id)a1;
- (void)performActivity;

@end
