@class NSString, NSDictionary, SBPIPPositionHyperregionLibrary;
@protocol SBPIPPositionHyperregionComposerDelegate;

@interface SBPIPDefaultPositionHyperregionComposer : NSObject <SBPIPPositionHyperregionComposing> {
    BOOL _isPad;
    SBPIPPositionHyperregionLibrary *_regionsLibrary;
    struct SBPIPPositionInteractionStateContext { BOOL isStashed; BOOL isInteractive; BOOL hasActiveGesture; BOOL isFreelyPositionable; struct CGPoint { double x; double y; } projectedPosition; struct CGPoint { double x; double y; } initialPosition; struct CGPoint { double x; double y; } currentPosition; double currentPositionStashProgress; double projectedPositionStashProgress; } _lastInteractionStateContext;
    NSDictionary *_lastRegionsMap;
    NSDictionary *_lastResolvedRegionsMap;
    struct SBPIPPositionGeometryContext { struct CGSize { double width; double height; } pipCurrentSize; struct CGSize { double width; double height; } pipLastSteadySize; struct CGSize { double width; double height; } pipStashedSize; struct CGPoint { double x; double y; } pipAnchorPointOffset; struct CGSize { double width; double height; } containerSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets; struct UIEdgeInsets { double top; double left; double bottom; double right; } minimumPadding; struct UIEdgeInsets { double top; double left; double bottom; double right; } stashedMinimumPadding; unsigned long long offscreenCorners; long long orientation; } _lastGeometryContext;
}

@property (weak, nonatomic) id<SBPIPPositionHyperregionComposerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)positionRegionsForRegions:(id)a0 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; unsigned long long x8; long long x9; })a1 interaction:(struct SBPIPPositionInteractionStateContext { BOOL x0; BOOL x1; BOOL x2; BOOL x3; struct CGPoint { double x0; double x1; } x4; struct CGPoint { double x0; double x1; } x5; struct CGPoint { double x0; double x1; } x6; double x7; double x8; })a2;
- (id)regionWithType:(long long)a0 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; unsigned long long x8; long long x9; })a1;
- (void)_addRegionWithType:(long long)a0 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; unsigned long long x8; long long x9; })a1 toMap:(id)a2;
- (void)_pruneRegionsMap:(id)a0 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; unsigned long long x8; long long x9; })a1 interaction:(struct SBPIPPositionInteractionStateContext { BOOL x0; BOOL x1; BOOL x2; BOOL x3; struct CGPoint { double x0; double x1; } x4; struct CGPoint { double x0; double x1; } x5; struct CGPoint { double x0; double x1; } x6; double x7; double x8; })a2;

@end
