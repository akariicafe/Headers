@class NSURL;

@interface NUAdBannerView : ADBannerView

@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) unsigned long long skipThreshold;

- (id)initWithAdCreativeType:(int)a0 layoutOptions:(id)a1;

@end
