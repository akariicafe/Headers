@class ICDocCamDocumentInfo, ICDocCamImageCache, UIView, UIViewController;

@interface DCMarkupActivity : UIActivity

@property (weak, nonatomic) UIView *fromView;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) ICDocCamDocumentInfo *documentInfo;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (copy, nonatomic) id /* block */ frameBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) unsigned long long inkStyle;

- (id)activityType;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initFromView:(id)a0 presentingViewController:(id)a1 frameBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;

@end
