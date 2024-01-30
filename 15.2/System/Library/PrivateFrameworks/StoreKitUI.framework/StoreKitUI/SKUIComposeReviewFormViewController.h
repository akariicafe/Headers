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

- (void)setRating:(float)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_submit;
- (void)dealloc;
- (id)initWithReviewMetadata:(id)a0;
- (void)composeReviewViewValidityChanged:(id)a0;

@end
