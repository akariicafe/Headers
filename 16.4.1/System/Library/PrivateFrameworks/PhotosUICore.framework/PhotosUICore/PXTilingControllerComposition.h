@class NSSet;
@protocol PXTilingControllerCompositionObserver, PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput, PXTilingScrollController;

@interface PXTilingControllerComposition : NSObject

@property (weak, nonatomic, setter=_setScrollController:) id<PXTilingScrollController> _scrollController;
@property (weak, nonatomic) id<PXTilingControllerCompositionObserver> observer;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSSet *tilingControllers;
@property (weak, nonatomic) id<PXTilingControllerCompositionInput> input;
@property (weak, nonatomic) id<PXTilingControllerCompositionOutput> output;

- (void).cxx_destruct;
- (void)invalidateComposition;
- (void)invalidateCompositionWithContext:(id)a0;
- (void)updateComposition;

@end
