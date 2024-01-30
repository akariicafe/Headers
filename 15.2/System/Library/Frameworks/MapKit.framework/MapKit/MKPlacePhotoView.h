@class UIImageView, UIImage, NSString;

@interface MKPlacePhotoView : UIScrollView <UIScrollViewDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isZoomed;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL needsFullImageDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
