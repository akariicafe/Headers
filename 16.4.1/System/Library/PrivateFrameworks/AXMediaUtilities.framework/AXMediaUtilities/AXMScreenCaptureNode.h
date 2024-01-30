@class AXMScreenGrabber;

@interface AXMScreenCaptureNode : AXMSourceNode

@property (retain, nonatomic) AXMScreenGrabber *screenGrabber;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;

- (void).cxx_destruct;
- (void)nodeInitialize;
- (void)produceImage:(id)a0;
- (void)triggerWithScreenCaptureRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 interfaceOrientation:(long long)a1 options:(id)a2 cacheKey:(id)a3 resultHandler:(id /* block */)a4;

@end
