@class PIVideoStabilizeRequest, NUImagePropertiesRequest, PLPhotoEditRenderer, PXVideoStabilizeOperationSpec;
@protocol PXVideoStabilizeResult;

@interface PXVideoStabilizeOperation : PXVideoProcessingOperation {
    PLPhotoEditRenderer *_renderer;
    PIVideoStabilizeRequest *_stabilizeRequest;
    NUImagePropertiesRequest *_imagePropertiesRequest;
}

@property (readonly, nonatomic) id<PXVideoStabilizeResult> result;
@property (readonly, nonatomic) PXVideoStabilizeOperationSpec *spec;

- (id)initWithSpec:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)performProcessing;

@end
