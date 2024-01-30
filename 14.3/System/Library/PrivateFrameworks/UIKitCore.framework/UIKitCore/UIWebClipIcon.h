@class NSURL;

@interface UIWebClipIcon : NSObject

@property (nonatomic, getter=isPrecomposed) BOOL precomposed;
@property (nonatomic, getter=isSiteWide) BOOL siteWide;
@property (nonatomic) struct CGSize { double width; double height; } bestSize;
@property (retain, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (long long)compare:(id)a0 preferringDeviceIconSizes:(BOOL)a1;

@end
