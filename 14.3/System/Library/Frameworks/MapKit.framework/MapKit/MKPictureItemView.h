@class NSString, UIImageView, UIVisualEffectView, UILabel;
@protocol GEOPictureItem;

@interface MKPictureItemView : UIView

@property (retain, nonatomic) id<GEOPictureItem> pictureItem;
@property (copy, nonatomic) NSString *providerName;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIVisualEffectView *effectView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL didDownloadImage;

- (void).cxx_destruct;
- (void)addShadowToLabel:(id)a0;
- (void)updateLabelsSettings;
- (void)setTitleLabelProviderName;
- (id)initWithPictureItem:(id)a0 providerName:(id)a1;
- (void)fetchImageIfNecessary;
- (void)updateUIForTheme:(id)a0;
- (void)setupSubviews;
- (void)contentSizeCategoryDidChange:(id)a0;

@end
