@class NSIndexPath, UIView;

@interface UIViewAnimation : NSObject {
    BOOL _animateFromCurrentPosition;
    BOOL _shouldDeleteAfterAnimation;
    BOOL _editing;
    BOOL _shouldAnimateShadow;
    BOOL _shouldResetGroupOpacityAfterAnimation;
    BOOL _shouldAllowGroupOpacityAfterAnimation;
    BOOL _shouldClipToBoundsAfterAnimation;
    int _viewType;
    int _curve;
    UIView *_view;
    NSIndexPath *_indexPath;
    double _endAlpha;
    double _startFraction;
    double _endFraction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endRect;
}

- (id)description;
- (void).cxx_destruct;

@end
