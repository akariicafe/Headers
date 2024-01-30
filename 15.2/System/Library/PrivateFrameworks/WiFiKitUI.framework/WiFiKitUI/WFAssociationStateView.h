@class UIImageView, UIActivityIndicatorView;

@interface WFAssociationStateView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) long long state;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
