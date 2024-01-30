@class UIImage, ICImageAndMovieThumbnailView;

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView

@property (retain, nonatomic) ICImageAndMovieThumbnailView *thumbnailView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) BOOL showAsMovie;

- (void).cxx_destruct;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)performSetup;

@end
