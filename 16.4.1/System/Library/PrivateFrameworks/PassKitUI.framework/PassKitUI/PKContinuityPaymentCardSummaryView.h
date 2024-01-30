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

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_createLabels;
- (void)_createSubviews;
- (id)_formatTextForString:(id)a0 alerting:(BOOL)a1;
- (void)_prepareImageAndValueConstraints;

@end
