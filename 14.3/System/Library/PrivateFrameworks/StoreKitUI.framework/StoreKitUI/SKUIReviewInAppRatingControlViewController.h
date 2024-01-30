@class SKUIStarRatingControl;

@interface SKUIReviewInAppRatingControlViewController : UIViewController

@property (retain, nonatomic) SKUIStarRatingControl *ratingControl;

- (void).cxx_destruct;
- (void)commonInit;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)_repeatedTemplateImageForImage:(id)a0;

@end
