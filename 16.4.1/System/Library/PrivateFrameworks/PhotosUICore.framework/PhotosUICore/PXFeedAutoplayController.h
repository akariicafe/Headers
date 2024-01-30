@class _PXFeedInlinePlaybackController, NSMapTable, NSString;

@interface PXFeedAutoplayController : NSObject <PXChangeObserver>

@property (readonly, nonatomic) _PXFeedInlinePlaybackController *inlinePlaybackController;
@property (readonly, nonatomic) NSMapTable *playbackRecordsByItemLayout;
@property (nonatomic) BOOL isContainerLayoutVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)addItemLayout:(id)a0 withDisplayAsset:(id)a1;
- (void)containerLayoutVisibleRectDidChange;
- (id)initWithContainerLayout:(id)a0 viewModel:(id)a1 itemLayoutDesiredPlayStateSetter:(id /* block */)a2;
- (void)removeItemLayout:(id)a0;

@end
