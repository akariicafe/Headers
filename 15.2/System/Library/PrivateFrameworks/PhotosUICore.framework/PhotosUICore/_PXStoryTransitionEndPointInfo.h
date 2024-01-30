@class PXStoryItemPlacementContext, PXStoryItemPlacement, PXStoryTransitionableTungstenViewManager;
@protocol PXStoryItemPlacementController;

@interface _PXStoryTransitionEndPointInfo : NSObject

@property (retain, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager;
@property (retain, nonatomic) id<PXStoryItemPlacementController> itemPlacementController;
@property (retain, nonatomic) PXStoryItemPlacementContext *placementContext;
@property (retain, nonatomic) PXStoryItemPlacement *originalItemPlacement;
@property (retain, nonatomic) id itemReference;

- (void).cxx_destruct;

@end
