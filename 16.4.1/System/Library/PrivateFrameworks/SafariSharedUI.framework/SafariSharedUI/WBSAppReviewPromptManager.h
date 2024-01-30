@protocol WBSAppReviewPromptPresenting;

@interface WBSAppReviewPromptManager : NSObject

@property (weak, nonatomic) id<WBSAppReviewPromptPresenting> presenter;

- (id)init;
- (id)initWithPresenter:(id)a0;
- (void).cxx_destruct;
- (void)_presentIfNeeded;
- (BOOL)_shouldPromptForReview;
- (void)didDismissReaderWithScrollPercentage:(double)a0 dateReaderOpened:(id)a1;

@end
