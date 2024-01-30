@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CAMThumbnailGenerator : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_generationQueue;
@property (readonly, nonatomic) struct OpaqueVTPixelTransferSession { } *_generationQueuePixelTransferSession;
@property (readonly, nonatomic) NSMapTable *_generationQueueRotationSessionsMapTable;

- (id)newJPEGDataInOrientation:(long long)a0 usingPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (struct __CVBuffer { } *)_newRotatedPixelBuffer:(struct __CVBuffer { } *)a0 withOrientation:(long long)a1;
- (struct __CVBuffer { } *)_newThumbnailOfSize:(struct CGSize { double x0; double x1; })a0 inOrientation:(long long)a1 withPixelFormat:(unsigned int)a2 usingPixelBuffer:(struct __CVBuffer { } *)a3;
- (id)newJPEGDataInOrientation:(long long)a0 usingSurface:(void *)a1 withMetadata:(id)a2;
- (struct CGImage { } *)newBGRAImageOfFormat:(long long)a0 inOrientation:(long long)a1 usingPixelBuffer:(struct __CVBuffer { } *)a2;
- (struct __CVBuffer { } *)_newThumbnailOfFormat:(long long)a0 inOrientation:(long long)a1 withPixelFormat:(unsigned int)a2 usingPixelBuffer:(struct __CVBuffer { } *)a3;
- (id)_neededColorspacePropertiesFromMetadata:(id)a0;
- (struct CGImage { } *)newBGRAImageInOrientation:(long long)a0 usingSurface:(void *)a1;
- (struct CGImage { } *)newBGRAImageInOrientation:(long long)a0 usingPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)newJPEGDataOfFormat:(long long)a0 inOrientation:(long long)a1 usingSurface:(void *)a2 withMetadata:(id)a3;
- (struct CGImage { } *)newBGRAImageOfFormat:(long long)a0 inOrientation:(long long)a1 usingSurface:(void *)a2;

@end
