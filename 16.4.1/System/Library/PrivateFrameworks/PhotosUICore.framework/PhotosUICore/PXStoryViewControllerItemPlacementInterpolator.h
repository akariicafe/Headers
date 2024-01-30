@class PXStoryItemPlacement, CAMediaTimingFunction, UIView;

@interface PXStoryViewControllerItemPlacementInterpolator : NSObject {
    PXStoryItemPlacement *_sourcePlacement;
    PXStoryItemPlacement *_targetPlacement;
    BOOL _allowsAdjustedTargetPlacement;
    long long _layering;
    UIView *_containerView;
    double _duration;
    CAMediaTimingFunction *_mainTimingFunction;
    CAMediaTimingFunction *_secondaryTimingFunction;
    CAMediaTimingFunction *_fadeTimingFunction;
    BOOL _hasValidGeometry;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRectVelocity;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    BOOL _alwaysHideSource;
    BOOL _alwaysHideTarget;
    BOOL _animatesDisplayedAssetContentsRect;
    BOOL _animatesCornerRadius;
    BOOL _animatesNormalizedDisplayedAssetRect;
    BOOL _animatesNormalizedTitleRect;
    BOOL _animatesNormalizedSubtitleRect;
}

@property (nonatomic) double time;

- (id)init;
- (void).cxx_destruct;
- (id)adjustedPlacement:(id)a0;
- (id)initWithSourcePlacement:(id)a0 targetPlacement:(id)a1 layering:(long long)a2 containerView:(id)a3 duration:(double)a4;

@end
