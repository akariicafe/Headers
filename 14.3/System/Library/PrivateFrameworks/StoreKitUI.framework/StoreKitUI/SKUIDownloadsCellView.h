@class UISlider, NSString, UIImageView, UIImage, UILabel, NSAttributedString, UIButton;

@interface SKUIDownloadsCellView : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    UISlider *_progressSlider;
}

@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double progress;
@property (nonatomic) long long buttonType;
@property (readonly, nonatomic) UIButton *button;
@property (nonatomic) BOOL isPad;

- (id)init;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;

@end
