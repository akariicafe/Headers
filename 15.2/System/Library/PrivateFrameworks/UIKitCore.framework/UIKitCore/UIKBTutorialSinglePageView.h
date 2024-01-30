@class UILabel, UIView;

@interface UIKBTutorialSinglePageView : UIView

@property (retain, nonatomic) UIView *visualDisplayView;
@property (retain, nonatomic) UILabel *textTitle;
@property (retain, nonatomic) UILabel *textBody;
@property (nonatomic) BOOL useAlertStyle;

- (void)layoutSubviews;
- (void)configPageView;
- (id)initWithImageView:(id)a0;
- (void).cxx_destruct;

@end
