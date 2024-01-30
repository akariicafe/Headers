@class UIImage, NSData, NSArray;

@interface ICAttachmentPreviewImageLoader : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *orientedImage;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSArray *previewImageURLs;
@property (nonatomic) BOOL delayLoadingURLs;
@property (nonatomic) long long imageOrientation;
@property (copy, nonatomic) id /* block */ imageDidLoadBlock;

+ (id)orientedImage:(id)a0 withBackground:(int)a1;
+ (id)orientedImage:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 background:(int)a2 backgroundTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;

- (id)loadImage;
- (void).cxx_destruct;
- (void)loadData;
- (BOOL)canLoadImage;
- (id)initWithOriginalImage:(id)a0 orientedImage:(id)a1 data:(id)a2 scale:(double)a3 previewImageURLs:(id)a4 delayLoadingURLs:(BOOL)a5;
- (id)loadOrientedImage;

@end
