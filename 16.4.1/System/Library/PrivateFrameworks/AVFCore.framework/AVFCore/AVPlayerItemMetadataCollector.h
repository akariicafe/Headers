@class AVPlayerItemMetadataCollectorInternal, NSObject;
@protocol AVPlayerItemMetadataCollectorPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector {
    AVPlayerItemMetadataCollectorInternal *_metadataCollectorInternal;
}

@property (readonly, weak, nonatomic) id<AVPlayerItemMetadataCollectorPushDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_detatchFromPlayerItem;
- (void)_updateTaggedRangeMetadataArray:(id)a0;
- (void)dealloc;
- (id)init;
- (id)_getFilteredMetadataGroups:(id)a0 fromIdentifiers:(id)a1 andClassifyingLabels:(id)a2 modifiedIndexesOut:(id *)a3 newIndexesOut:(id *)a4;
- (BOOL)_isAttachedToPlayerItem;
- (id)initWithIdentifiers:(id)a0 classifyingLabels:(id)a1;

@end
