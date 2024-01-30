@class NSDictionary, QLThumbnailHostContext;
@protocol QLTExtensionThumbnailItem;

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation

@property (retain, nonatomic) QLThumbnailHostContext *hostContext;
@property (copy, nonatomic) id /* block */ serviceErrorHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<QLTExtensionThumbnailItem> item;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double minimumSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long badgeType;
@property (retain, nonatomic) NSDictionary *generatorData;

- (void)finish;
- (void).cxx_destruct;
- (void)main;
- (id)initWithThumbnailHostContext:(id)a0 item:(id)a1 size:(struct CGSize { double x0; double x1; })a2 minimumSize:(double)a3 scale:(double)a4 badgeType:(unsigned long long)a5 generatorData:(id)a6 completionHandler:(id /* block */)a7 serviceErrorHandler:(id /* block */)a8;

@end
