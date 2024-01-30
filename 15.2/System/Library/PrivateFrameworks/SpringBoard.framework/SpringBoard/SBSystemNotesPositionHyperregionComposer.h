@class NSString, SBPIPPositionHyperregionLibrary;
@protocol SBPIPPositionHyperregionComposerDelegate, BSInvalidatable;

@interface SBSystemNotesPositionHyperregionComposer : NSObject <SBPIPPositionHyperregionComposing> {
    SBPIPPositionHyperregionLibrary *_regionsLibrary;
    unsigned long long _state;
    struct CGSize { double width; double height; } _dismissToSize;
    unsigned long long _offscreenCorners;
    int _animationState;
    id<BSInvalidatable> _stateCaptureInvalidatable;
}

@property (weak, nonatomic) id<SBPIPPositionHyperregionComposerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupStateCapture;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id)positionRegionsForRegions:(id)a0 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; unsigned long long x8; long long x9; })a1 interaction:(struct SBPIPPositionInteractionStateContext { BOOL x0; BOOL x1; BOOL x2; BOOL x3; struct CGPoint { double x0; double x1; } x4; struct CGPoint { double x0; double x1; } x5; struct CGPoint { double x0; double x1; } x6; double x7; double x8; })a2;
- (id)regionWithType:(long long)a0 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; unsigned long long x8; long long x9; })a1;
- (void)_addOffscreenCornersToRegions:(id)a0 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; unsigned long long x8; long long x9; })a1;
- (void)setupForSwipesFromCorners:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setupForInteractiveCornerGesture;
- (void)setupForInteractiveCornerGestureEnd;
- (void)setupForStandardBehavior;
- (void)setupForInteractiveDismissalToSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupForEdgeProtectCornerSwipe;

@end
