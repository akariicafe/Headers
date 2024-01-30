@class AVPlayerItemSampleBufferOutputInternal, NSObject;
@protocol OS_dispatch_queue, AVPlayerItemSampleBufferOutputDelegate;

@interface AVPlayerItemSampleBufferOutput : AVPlayerItemOutput {
    AVPlayerItemSampleBufferOutputInternal *_internal;
}

@property (readonly, weak) id<AVPlayerItemSampleBufferOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (struct OpaqueFigPlaybackItem { } *)_figPlaybackItem;
- (void)_setFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0;
- (id)_weakReferenceToPlayerItemTrack;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBufferForTrackID:(int)a0 flags:(unsigned int *)a1;
- (void)_figPlaybackItemTrackSampleBufferDidBecomeAvailableForTrackID:(int)a0 extractionID:(int)a1;
- (void)_figPlaybackItemTrackOutputSequenceWasFlushedForTrackID:(int)a0 extractionID:(int)a1;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (int)_trackID;
- (id)init;
- (void)_setTrackID:(int)a0;
- (int)_extractionID;
- (void)_setExtractionID:(int)a0;
- (void)_attachToPlayerItemTrack:(id)a0 figPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a1;
- (void)_detachFromPlayerItemTrack;
- (void)dealloc;

@end
