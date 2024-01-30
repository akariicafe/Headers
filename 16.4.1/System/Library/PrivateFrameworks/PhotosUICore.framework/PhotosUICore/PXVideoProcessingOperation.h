@class PXVideoProcessingOperationSpec;
@protocol PXVideoProcessingOperationResult;

@interface PXVideoProcessingOperation : NSOperation

@property (readonly, nonatomic) PXVideoProcessingOperationSpec *spec;
@property (readonly, nonatomic) id<PXVideoProcessingOperationResult> result;
@property (copy, nonatomic) id /* block */ progressHandler;

+ (id)new;

- (id)initWithSpec:(id)a0;
- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)performProcessing;

@end
