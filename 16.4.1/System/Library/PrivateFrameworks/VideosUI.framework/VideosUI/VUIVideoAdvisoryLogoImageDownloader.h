@class TVImageProxy;

@interface VUIVideoAdvisoryLogoImageDownloader : NSObject

@property (retain, nonatomic) TVImageProxy *ratingImageProxy;
@property (retain, nonatomic) TVImageProxy *photoSensitivityImageProxy;

- (void).cxx_destruct;
- (void)downloadImageWithURL:(id)a0 imageInfo:(id)a1 completion:(id /* block */)a2;
- (void)downloadImagesWithAdvisoryImageInfo:(id)a0 photoSensitivityImageInfo:(id)a1 completion:(id /* block */)a2;

@end
