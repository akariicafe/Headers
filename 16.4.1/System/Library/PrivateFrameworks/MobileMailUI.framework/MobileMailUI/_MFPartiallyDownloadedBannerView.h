@interface _MFPartiallyDownloadedBannerView : MFHasMoreContentBannerView

@property unsigned long long remainingBytes;

- (id)actionStringIsDownloading:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remainingBytes:(unsigned long long)a1;

@end
