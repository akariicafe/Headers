@class TVImageProxy;

@interface VUIVideoAdvisoryLogoImageDownloader : NSObject

@property (retain, nonatomic) TVImageProxy *ratingImageProxy;

- (void).cxx_destruct;
- (void)downloadImageWithURL:(id)a0 imageInfo:(id)a1 completion:(id /* block */)a2;

@end
