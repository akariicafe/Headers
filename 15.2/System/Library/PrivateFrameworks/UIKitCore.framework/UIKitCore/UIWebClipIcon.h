@class NSURL;

@interface UIWebClipIcon : NSObject

@property (nonatomic, getter=isPrecomposed) BOOL precomposed;
@property (nonatomic, getter=isSiteWide) BOOL siteWide;
@property (nonatomic) struct CGSize { double width; double height; } bestSize;
@property (retain, nonatomic) NSURL *url;

- (long long)compare:(id)a0 preferringDeviceIconSizes:(BOOL)a1;
- (void).cxx_destruct;

@end
