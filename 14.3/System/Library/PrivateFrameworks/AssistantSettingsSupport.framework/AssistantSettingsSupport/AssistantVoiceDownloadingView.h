@class UILabel, UIActivityIndicatorView;

@interface AssistantVoiceDownloadingView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *indicator;
@property (retain, nonatomic) UILabel *downloadLabel;

- (void).cxx_destruct;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithActivityIndicatorStyle:(long long)a0;

@end
