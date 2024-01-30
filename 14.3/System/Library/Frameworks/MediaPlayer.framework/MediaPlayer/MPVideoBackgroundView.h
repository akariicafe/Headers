@class NSString, UIImageView, UIImage, UIView;

@interface MPVideoBackgroundView : UIView {
    UIView *_imageView;
    UIImageView *_iconView;
    UIImageView *_backgroundPlaceholderImageView;
    UIView *_backgroundPlaceholderView;
    UIImageView *_customBackgroundImageView;
    BOOL _showDestinationPlaceholder;
}

@property (nonatomic) long long interfaceOrientation;
@property (retain, nonatomic) UIImage *backgroundPlaceholderImage;
@property (readonly, nonatomic) UIView *backgroundPlaceholderView;
@property (retain, nonatomic) UIView *backgroundPlaceholderPosterImageView;
@property (nonatomic) long long destinationPlaceholderStyle;
@property (copy, nonatomic) NSString *destinationName;
@property (copy, nonatomic) id /* block */ layoutSubviewsPostflightHandler;

- (id)qtIcon;
- (void).cxx_destruct;
- (void)setShowQTAudioOnlyUI:(BOOL)a0;
- (void)_createInformationalTitleView:(id *)a0 systemFont:(id)a1 lineBreakMode:(long long)a2;
- (void)setCustomBackgroundImage:(id)a0;
- (void)setShowDestinationPlaceholder:(BOOL)a0 animated:(BOOL)a1;
- (void)_tvOutCapabilityDidChangeNotification:(id)a0;
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
