@class NSMutableArray, NSMutableDictionary;

@interface SBChamoisOverlappingModel : NSObject <NSMutableCopying>

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableDictionary *centersForItems;
@property (retain, nonatomic) NSMutableDictionary *sizesForItems;
@property (retain, nonatomic) NSMutableDictionary *userConfiguredSizesBeforeAutoResizingForItems;
@property (retain, nonatomic) NSMutableDictionary *unoccludedPeekingCentersForItems;
@property (retain, nonatomic) NSMutableDictionary *coveredForItems;
@property (retain, nonatomic) NSMutableDictionary *partiallyOccludedForItems;
@property (retain, nonatomic) NSMutableDictionary *fullyOccludedForItems;
@property (retain, nonatomic) NSMutableDictionary *overlappingScaleAnchorCentersForItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stageArea;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) double widthThresholdToHideStrip;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } compactedBoundingBox;
@property (retain, nonatomic) NSMutableDictionary *compactedCentersForItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stageAreaForResizing;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0;
- (BOOL)isContinuousExposeStripVisible;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)modelByModifyingModelWithBlock:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })unoccludedPeekingCenterForItem:(id)a0;
- (struct CGPoint { double x0; double x1; })centerForItem:(id)a0;
- (struct CGPoint { double x0; double x1; })compactedCenterForItem:(id)a0;
- (id)initWithItems:(id)a0 centersForItems:(id)a1 sizesForItems:(id)a2 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)isItemCoveredByFullyOccludedPeekingItem:(id)a0;
- (BOOL)isItemFullyOccluded:(id)a0;
- (BOOL)isItemPartiallyOccluded:(id)a0;
- (struct CGPoint { double x0; double x1; })overlappingScaleAnchorCenterForItem:(id)a0;
- (struct CGSize { double x0; double x1; })userConfiguredSizeBeforeOverlappingForItem:(id)a0;

@end
