@class NSString, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface NUVideoCompositor : NSObject <AVVideoCompositing> {
    _Atomic unsigned long long _requestCounter;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSMutableSet *_pendingRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingRequestsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _renderingQueueInitializeLock;
}

@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)renderContextChanged:(id)a0;
- (void)startVideoCompositionRequest:(id)a0;
- (void)fulfillVideoCompositionRequest:(id)a0;
- (void)failVideoCompositionRequest:(id)a0 error:(id)a1;
- (void)finishCompositionRequest:(id)a0 withComposedVideoFrame:(struct __CVBuffer { } *)a1;
- (id)hdrPixelFormats:(long long)a0;
- (void)setColorSpaceOfDestinationBuffer:(struct __CVBuffer { } *)a0 fromPrimarySourceBufferOfRequest:(id)a1;
- (id)standardPixelFormats:(long long)a0;
- (BOOL)testAndSetVideoCompositionRequestFinished:(id)a0;
- (id)videoFramesFromRequest:(id)a0;
- (id)videoMetadataSamplesFromRequest:(id)a0;

@end
