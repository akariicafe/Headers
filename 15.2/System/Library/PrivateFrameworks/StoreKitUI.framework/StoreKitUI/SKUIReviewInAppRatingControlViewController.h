@class SKUIStarRatingControl;

@interface SKUIReviewInAppRatingControlViewController : UIViewController

@property (retain, nonatomic) SKUIStarRatingControl *ratingControl;

- (void)viewDidLoad;
- (void)commonInit;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_repeatedTemplateImageForImage:(id)a0;

@end
