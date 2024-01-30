@class NSString, UIImageView, UIImage, UIView;
@protocol NTKGalleonProgressSettable;

@interface NTKGalleonRasterizableProgressView : UIView <NTKGalleonProgressSettable> {
    UIImageView *_imageView;
    UIImage *_minProgressImage;
    UIImage *_maxProgressImage;
}

@property (readonly, nonatomic) UIView<NTKGalleonProgressSettable> *progressView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
