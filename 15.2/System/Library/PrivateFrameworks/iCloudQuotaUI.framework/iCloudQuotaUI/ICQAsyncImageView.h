@class NSURL;

@interface ICQAsyncImageView : UIImageView

@property (retain, nonatomic) NSURL *currentImageURL;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)updateToImageFromURL:(id)a0;
- (void)loadImageFromURL:(id)a0;

@end
