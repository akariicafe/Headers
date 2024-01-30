@class NSString, PXGLayout, NSMutableDictionary, NSObject;
@protocol UICoordinateSpace;

@interface PXStoryItemPlacementContext : NSObject {
    PXGLayout *_referenceLayout;
    struct CGPoint { double x; double y; } _referenceOrigin;
    NSObject<UICoordinateSpace> *_referenceCoordinateSpace;
    NSMutableDictionary *_adjustedPreferredPlacementsByPlacementUUID;
    NSMutableDictionary *_placementUUIDsBySourceIdentifier;
}

@property (readonly, nonatomic) NSString *diagnosticDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_adjustPreferredPlacementInSourceWithIdentifier:(id)a0 configuration:(id /* block */)a1;
- (id)_adjustedPreferredPlacementForPlacement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1 toLayout:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLayout:(id)a1 toCoordinateSpace:(id)a2;
- (void)_registerOriginalPlacement:(id)a0 forSourceIdentifiers:(id)a1;
- (id)initWithOriginOfLayout:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;

@end
