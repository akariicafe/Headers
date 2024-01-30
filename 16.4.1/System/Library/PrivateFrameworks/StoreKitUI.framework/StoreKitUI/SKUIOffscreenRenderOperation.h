@class UIImage, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIOffscreenRenderOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id /* block */ _createLayerBlock;
    UIImage *_outputImage;
}

@property (copy, nonatomic) id /* block */ createLayerBlock;
@property (readonly, nonatomic) UIImage *outputImage;

+ (void)preheatOffscreenRenderOperations;

- (void)main;
- (id)init;
- (void).cxx_destruct;

@end
