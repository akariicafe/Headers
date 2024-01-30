@class NSMapTable, _PXStoryFeedInlinePlaybackController;

@interface PXStoryFeedAutoplayController : NSObject

@property (readonly, nonatomic) _PXStoryFeedInlinePlaybackController *inlinePlaybackController;
@property (readonly, nonatomic) NSMapTable *playbackRecordsByItemLayout;
@property (nonatomic) BOOL isContainerLayoutVisible;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContainerLayout:(id)a0 itemLayoutDesiredPlayStateSetter:(id /* block */)a1;
- (void)containerLayoutVisibleRectDidChange;
- (void)addItemLayout:(id)a0 withDisplayAsset:(id)a1;
- (void)removeItemLayout:(id)a0;

@end
