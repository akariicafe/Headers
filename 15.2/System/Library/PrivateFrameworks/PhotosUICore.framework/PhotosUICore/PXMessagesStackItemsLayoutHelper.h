@class NSArray, NSString, PFMessagesStackLayoutFrameSolver;

@interface PXMessagesStackItemsLayoutHelper : NSObject <PXMutableMessagesStackItemsLayoutHelper> {
    unsigned long long _nestedChanges;
    unsigned long long _baseGeometriesSize;
    struct { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; } *_baseGeometries;
    struct { struct CGPoint { double x; double y; } center; struct CGSize { double width; double height; } size; double zPos; double rotationAngle; double alpha; double overlayAlpha; double tapbackScale; double aspectMixFactor; } _initialItemCentralGeometry;
    struct { struct CGPoint { double x; double y; } center; struct CGSize { double width; double height; } size; double zPos; double rotationAngle; double alpha; double overlayAlpha; double tapbackScale; double aspectMixFactor; } _finalItemCentralGeometry;
    PFMessagesStackLayoutFrameSolver *_frameSolver;
}

@property (nonatomic) unsigned long long stackedItemsCount;
@property (nonatomic) double normalizedStackSizeTransform;
@property (copy, nonatomic) NSArray *normalizedStackHorizontalOffsets;
@property (nonatomic) double normalizedStackVerticalOffset;
@property (nonatomic) double normalizedContentInsets;
@property (nonatomic) double rotationAngle;
@property (nonatomic) unsigned long long zOrderArchSide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updateInternalState;
- (void)_swapBaseZPositions;
- (void)getGeometries:(struct { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; } *)a0 count:(unsigned long long)a1 forVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 focus:(double)a3 archSide:(unsigned long long)a4 keyframeOverride:(long long)a5;
- (struct CGSize { double x0; double x1; })maxItemSizeForReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (double)horizontalContentMarginForReferenceSize:(struct CGSize { double x0; double x1; })a0 itemAspect:(double)a1;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; })baseGeometryForIndex:(long long)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
