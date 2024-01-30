@class NSString, NSURL, UIImage, NSCache;

@interface MKPlaceCollectionImageGradientOperation : NSOperation

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct CGSize { double width; double height; } desiredSize;
@property (retain, nonatomic) NSString *debugName;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) NSString *cacheId;
@property (weak, nonatomic) NSCache *downloadCache;
@property (weak, nonatomic) NSCache *blurringCache;
@property (retain, nonatomic) UIImage *sourceImage;
@property (readonly, nonatomic) UIImage *blurredImage;

- (void)main;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contentSizeCategory:(id)a2 name:(id)a3 downloadCache:(id)a4 gradientCache:(id)a5 isRTL:(BOOL)a6 screenScale:(double)a7 cacheId:(id)a8;

@end
