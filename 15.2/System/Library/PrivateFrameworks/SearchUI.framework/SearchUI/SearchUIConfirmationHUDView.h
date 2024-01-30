@class SearchUICheckView, UIVisualEffectView, UILabel;

@interface SearchUIConfirmationHUDView : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) SearchUICheckView *checkView;
@property (retain, nonatomic) UILabel *textLabel;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)animateCheckmark;

@end
