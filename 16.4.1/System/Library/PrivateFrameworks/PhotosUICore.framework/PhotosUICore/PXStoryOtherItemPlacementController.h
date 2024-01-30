@class NSString;
@protocol PXStoryItemPlacementController;

@interface PXStoryOtherItemPlacementController : NSObject <PXStoryItemPlacementController_Internal, PXStoryItemPlacementController>

@property (readonly, nonatomic) id<PXStoryItemPlacementController> originalItemPlacementController;
@property (readonly, nonatomic) id originalItemReference;
@property (readonly, nonatomic) BOOL isIndirectItemPlacementController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOriginalItemPlacementController:(id)a0 originalItemReference:(id)a1;
- (id)placementInContext:(id)a0 forItemReference:(id)a1;
- (void)setPlacementOverride:(id)a0 forItemReference:(id)a1;

@end
