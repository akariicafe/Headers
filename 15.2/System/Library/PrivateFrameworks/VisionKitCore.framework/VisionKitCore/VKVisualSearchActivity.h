@class NSString, UIImage, UIViewController;

@interface VKVisualSearchActivity : UIActivity

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) struct CGImage { } *imageToProcess;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithImage:(struct CGImage { } *)a0 presentingViewController:(id)a1;

@end
