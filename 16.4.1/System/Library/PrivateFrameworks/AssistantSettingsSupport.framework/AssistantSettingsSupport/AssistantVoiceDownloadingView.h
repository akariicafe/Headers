@class UILabel, UIActivityIndicatorView;

@interface AssistantVoiceDownloadingView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *indicator;
@property (retain, nonatomic) UILabel *downloadLabel;

- (void)sizeToFit;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithActivityIndicatorStyle:(long long)a0;

@end
