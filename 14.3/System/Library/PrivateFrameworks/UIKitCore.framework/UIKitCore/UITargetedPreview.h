@class NSArray, UIPreviewTarget, UIPreviewParameters, UIView;
@protocol NSObject, NSCopying, _UIPreviewProvider;

@interface UITargetedPreview : NSObject <NSCopying>

@property (nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) BOOL defaultPreview;
@property (weak, nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) UIView *viewToSnapshot;
@property (readonly, nonatomic) id<_UIPreviewProvider> _PreviewProvider;
@property (readonly, nonatomic) BOOL sourceViewIsInViewHierarchy;
@property (readonly, nonatomic) BOOL hasCustomTarget;
@property (readonly, nonatomic, getter=_isVisible) BOOL _visible;
@property (nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode;
@property (copy, nonatomic) id<NSCopying, NSObject> internalIdentifer;
@property (retain, nonatomic) NSArray *transferrableAnimationKeys;
@property (nonatomic) BOOL _springboardPlatterStyle;
@property (retain, nonatomic, setter=_setOverridePositionTrackingView:) UIView *overridePositionTrackingView;
@property (nonatomic, getter=_prefersUnmaskedPlatterStyle, setter=_setPrefersUnmaskedPlatterStyle:) BOOL _prefersUnmaskedPlatterStyle;
@property (retain, nonatomic, getter=_accessoryViews, setter=_setAccessoryViews:) NSArray *_accessoryViews;
@property (readonly, nonatomic) UIPreviewTarget *target;
@property (readonly, nonatomic) UIView *view;
@property (readonly, copy, nonatomic) UIPreviewParameters *parameters;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)new;

- (id)initWithView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)platterAnimator_getBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 center:(struct CGPoint { double x0; double x1; } *)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 forContainer:(id)a3;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
- (id)retargetedPreviewWithTarget:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithView:(id)a0 parameters:(id)a1 target:(id)a2;
- (id)initWithView:(id)a0 parameters:(id)a1;

@end
