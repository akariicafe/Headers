@class AVWeakReferencingDelegateStorage, AVWeakReference, NSObject;
@protocol OS_dispatch_queue, AVPlayerItemSampleBufferOutputDelegate;

@interface AVPlayerItemSampleBufferOutput : AVPlayerItemOutput {
    NSObject<OS_dispatch_queue> *_stateQueue;
    AVWeakReference *_weakReference;
    AVWeakReference *_weakReferenceToPlayerItemTrack;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    struct OpaqueFigPlaybackItem { } *_figPlaybackItem;
    int _trackID;
    int _extractionID;
    double _advanceInterval;
}

@property (readonly, weak) id<AVPlayerItemSampleBufferOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)_weakReference;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (id)_weakReferenceToPlayerItemTrack;
- (void)_removeFigPlaybackItemListeners;
- (void)_addFigPlaybackItemListeners;
- (double)_advanceInterval;
- (void)_attachToPlayerItemTrack:(id)a0 figPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a1;
- (void)_detachFromPlayerItemTrack;
- (int)_extractionID;
- (struct OpaqueFigPlaybackItem { } *)_figPlaybackItem;
- (void)_figPlaybackItemTrackOutputSequenceWasFlushedForTrackID:(int)a0 extractionID:(int)a1;
- (void)_figPlaybackItemTrackSampleBufferDidBecomeAvailableForTrackID:(int)a0 extractionID:(int)a1;
- (void)_setExtractionID:(int)a0;
- (void)_setFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0;
- (void)_setTrackID:(int)a0;
- (int)_trackID;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBufferForTrackID:(int)a0 flags:(unsigned int *)a1;

@end
