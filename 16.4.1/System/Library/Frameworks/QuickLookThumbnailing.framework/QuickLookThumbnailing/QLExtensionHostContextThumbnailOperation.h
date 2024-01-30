@class NSFileCoordinator, QLThumbnailHostContext, NSDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_semaphore, QLTExtensionThumbnailItem;

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation

@property (retain, nonatomic) QLThumbnailHostContext *hostContext;
@property (copy, nonatomic) id /* block */ serviceErrorHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<QLTExtensionThumbnailItem> item;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double minimumSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) int iconFlavor;
@property (retain, nonatomic) NSDictionary *generatorData;
@property (nonatomic) int interpolationQuality;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *generationSemaphore;
@property (retain, nonatomic) NSFileCoordinator *coordinator;
@property (retain, nonatomic) NSOperationQueue *coordinationQueue;

- (void)finish;
- (void)main;
- (void).cxx_destruct;
- (id)initWithThumbnailHostContext:(id)a0 item:(id)a1 size:(struct CGSize { double x0; double x1; })a2 minimumSize:(double)a3 scale:(double)a4 badgeType:(unsigned long long)a5 iconFlavor:(int)a6 generatorData:(id)a7 interpolationQuality:(int)a8 completionHandler:(id /* block */)a9 serviceErrorHandler:(id /* block */)a10;

@end
