@class NSArray, UIDocumentInteractionController;

@interface PMOpenInIMovieActivity : UIActivity

@property (retain, nonatomic) UIDocumentInteractionController *documentInteractionController;
@property (retain, nonatomic) NSArray *activityItems;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (id)activityTitle;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
