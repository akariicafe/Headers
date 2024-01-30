@class NSString, SKUIStarRatingQueue, SKUIStoreDialogController, SKUIReviewInAppConfiguration, SKUIProductReviewURLProvider, SKUIReviewInAppRatingViewController, SKUIComposeReviewViewController;

@interface SKUIReviewInAppController : NSObject <SKUIComposeReviewDelegate>

@property (copy, nonatomic) SKUIReviewInAppConfiguration *configuration;
@property (retain, nonatomic) SKUIReviewInAppRatingViewController *ratingViewController;
@property (retain, nonatomic) SKUIComposeReviewViewController *composeViewController;
@property (retain, nonatomic) SKUIStoreDialogController *dialogController;
@property (retain, nonatomic) SKUIProductReviewURLProvider *reviewURLProvider;
@property (retain, nonatomic) SKUIStarRatingQueue *starRatingQueue;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)start;
- (BOOL)composeReviewViewController:(id)a0 shouldSubmitReview:(id)a1;
- (void)composeReviewViewController:(id)a0 didFailWithDialog:(id)a1;
- (void)composeReviewViewControllerDidSubmit:(id)a0;
- (void)composeReviewViewControllerDidCancel:(id)a0;
- (void)_presentRatingPrompt;
- (void)_finishWithResult:(unsigned long long)a0 error:(id)a1;
- (void)_presentAlertForDialog:(id)a0;
- (void)_promptForStarRatingDuringCompose:(id)a0;
- (void)_composeReviewViewControllerDidFinish:(id)a0 result:(unsigned long long)a1;
- (void)_submitRating:(long long)a0 completion:(id /* block */)a1;
- (void)_presentWriteReview;
- (void)composeReviewViewController:(id)a0 presentDialog:(id)a1;

@end
