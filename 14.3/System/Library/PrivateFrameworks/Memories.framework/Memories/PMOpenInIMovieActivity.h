@class NSArray, UIDocumentInteractionController;

@interface PMOpenInIMovieActivity : UIActivity

@property (retain, nonatomic) UIDocumentInteractionController *documentInteractionController;
@property (retain, nonatomic) NSArray *activityItems;

+ (long long)activityCategory;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)activityDidFinish:(BOOL)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
