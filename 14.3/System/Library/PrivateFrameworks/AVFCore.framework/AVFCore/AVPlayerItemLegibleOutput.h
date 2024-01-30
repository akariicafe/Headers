@class AVPlayerItemLegibleOutputInternal, NSObject;
@protocol OS_dispatch_queue, AVPlayerItemLegibleOutputPushDelegate;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput {
    AVPlayerItemLegibleOutputInternal *_legibleOutputInternal;
}

@property (readonly, weak, nonatomic) id<AVPlayerItemLegibleOutputPushDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)_collectUncollectables;
- (id)init;
- (BOOL)suppressesPlayerRendering;
- (void)_signalFlush;
- (void)dealloc;
- (id)_figLegibleOutputsDictionaryOptions;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detachFromPlayerItem;
- (void)_pushAttributedStrings:(id)a0 andSampleBuffers:(id)a1 atItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)setSuppressesPlayerRendering:(BOOL)a0;
- (void)setTextStylingResolution:(id)a0;
- (id)textStylingResolution;
- (id)initWithMediaSubtypesForNativeRepresentation:(id)a0;
- (id)initWithDependencyFactory:(id)a0 mediaSubtypesForNativeRepresentation:(id)a1;

@end
