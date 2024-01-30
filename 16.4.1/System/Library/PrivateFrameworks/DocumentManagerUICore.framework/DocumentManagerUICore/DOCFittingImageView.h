@class NSString, NSLayoutConstraint;
@protocol DOCThumbnail, DOCFittingImageViewDelegate;

@interface DOCFittingImageView : UIImageView <DOCThumbnailListener>

@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint;
@property (weak, nonatomic) id<DOCFittingImageViewDelegate> delegate;
@property (retain, nonatomic) id<DOCThumbnail> thumbnail;
@property (nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setImage:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)thumbnailLoaded:(id)a0;

@end
