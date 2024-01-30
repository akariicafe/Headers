@class NSDictionary, AVPlayerItemMetadataOutputInternal, NSObject;
@protocol OS_dispatch_queue, AVPlayerItemMetadataOutputPushDelegate;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput {
    AVPlayerItemMetadataOutputInternal *_metadataOutputInternal;
}

@property (readonly, nonatomic, getter=_figMetadataOutputsDictionaryOptions) NSDictionary *figMetadataOutputsDictionaryOptions;
@property (readonly, weak, nonatomic) id<AVPlayerItemMetadataOutputPushDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)initWithIdentifiers:(id)a0;
- (id)init;
- (void)_detachFromPlayerItem;
- (void)_pushTimedMetadataGroups:(id)a0 fromPlayerItemTrack:(id)a1;
- (void)_signalFlush;

@end
