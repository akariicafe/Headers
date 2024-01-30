@class TSPData;

@interface TSDImageDataHelper : NSObject

@property (readonly, nonatomic) TSPData *imageData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;

+ (id)thumbnailImageDataForImageData:(id)a0;

- (void).cxx_destruct;
- (id)initWithImageData:(id)a0;
- (void)generateThumbnailImageDataWithCompletionHandler:(id /* block */)a0;

@end
