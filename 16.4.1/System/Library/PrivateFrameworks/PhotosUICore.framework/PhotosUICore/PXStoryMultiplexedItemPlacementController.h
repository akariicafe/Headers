@class NSArray, NSString;
@protocol PXStoryItemPlacementController;

@interface PXStoryMultiplexedItemPlacementController : NSObject <PXStoryItemPlacementController_Internal, PXStoryItemPlacementController>

@property (readonly, nonatomic) NSArray *itemPlacementControllers;
@property (readonly, nonatomic) id<PXStoryItemPlacementController> mainItemPlacementController;
@property (readonly, nonatomic) BOOL isIndirectItemPlacementController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemPlacementControllerForItemPlacementControllers:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithItemPlacementControllers:(id)a0;
- (id)placementInContext:(id)a0 forItemReference:(id)a1;
- (void)setPlacementOverride:(id)a0 forItemReference:(id)a1;

@end
