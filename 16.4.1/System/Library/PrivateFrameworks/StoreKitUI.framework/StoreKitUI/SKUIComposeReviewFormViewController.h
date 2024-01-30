@class NSString, SKUIComposeReviewView, SKUIReviewMetadata;
@protocol SKUIComposeReviewFormDelegate;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {
    SKUIComposeReviewView *_composeView;
    SKUIReviewMetadata *_review;
}

@property (weak, nonatomic) id<SKUIComposeReviewFormDelegate> delegate;
@property (readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)setRating:(float)a0;
- (void)_submit;
- (void)composeReviewViewValidityChanged:(id)a0;
- (id)initWithReviewMetadata:(id)a0;

@end
