@class NSOperationQueue, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface MPArtworkResizeUtility : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue;
@property (retain, nonatomic) NSOperationQueue *artworkResizingOperationQueue;
@property (retain, nonatomic) NSMapTable *artworkResizingOperations;
@property (nonatomic) long long qualityOfService;

- (id)resizeImage:(id)a0 scaledFittingSize:(struct CGSize { double x0; double x1; })a1 useExactFittingSizeAsDestinationSize:(BOOL)a2 saveToDestinationURL:(id)a3 completionHandler:(id /* block */)a4;
- (void)cancelResizeImage:(id)a0;
- (id)initWithQualityOfService:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
