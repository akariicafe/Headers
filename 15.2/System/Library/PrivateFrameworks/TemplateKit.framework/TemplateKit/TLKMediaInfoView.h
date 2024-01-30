@class TLKImageView, NSArray, TLKContentsContainerView, TLKImage;

@interface TLKMediaInfoView : TLKView

@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKContentsContainerView *contentsContainer;
@property (retain, nonatomic) TLKImage *image;
@property (retain, nonatomic) NSArray *contents;

- (void).cxx_destruct;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (BOOL)imageViewIsHidden;
- (id)titleLabelStrings;
- (id)detailLabelStrings;

@end
