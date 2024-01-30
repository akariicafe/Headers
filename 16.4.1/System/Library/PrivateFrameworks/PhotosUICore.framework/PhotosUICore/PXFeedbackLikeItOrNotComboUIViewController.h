@class UIActivityIndicatorView;
@protocol PXFeedbackFormDelegate;

@interface PXFeedbackLikeItOrNotComboUIViewController : UIViewController

@property (retain, nonatomic) id<PXFeedbackFormDelegate> delegate;
@property (readonly, nonatomic) UIActivityIndicatorView *_activityIndicatorView;
@property (nonatomic) BOOL _showsActivityIndicator;

- (void)setShowsActivityIndicator:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)finishWithSuccess:(BOOL)a0;
- (void)cancelFeedback:(id)a0;
- (void)_dislikedIt:(id)a0;
- (void)_doFileRadar:(id)a0;
- (void)_fileRadar:(id)a0;
- (void)_likedIt:(id)a0;
- (void)_provideFeedback:(id)a0;
- (void)showMoreFeedbackForm;

@end
