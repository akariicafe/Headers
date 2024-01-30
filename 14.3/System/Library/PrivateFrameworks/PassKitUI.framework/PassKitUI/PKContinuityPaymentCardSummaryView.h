@class NSString, UIImageView, UILabel, NSLayoutConstraint, NSMutableArray;

@interface PKContinuityPaymentCardSummaryView : UIView {
    UIImageView *_alertView;
    UILabel *_descriptionView;
    UILabel *_subtitleView;
    NSLayoutConstraint *_textToTrailingConstraint;
    NSLayoutConstraint *_textToAlertConstraint;
    NSMutableArray *_singleLineConstraints;
    NSMutableArray *_subtitleConstraints;
}

@property (copy, nonatomic) NSString *cardDescription;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL subtitleDescribesError;
@property (readonly, nonatomic) UIImageView *thumbnailView;
@property (nonatomic) BOOL showsAlert;

- (void).cxx_destruct;
- (void)_prepareImageAndValueConstraints;
- (id)_formatTextForString:(id)a0 alerting:(BOOL)a1;
- (void)_createLabels;
- (void)updateConstraints;
- (void)_createSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
