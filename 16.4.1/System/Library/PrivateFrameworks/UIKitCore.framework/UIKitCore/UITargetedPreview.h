@class NSArray, _UIShape, UIPreviewTarget, UIView, UIPreviewParameters;
@protocol NSObject, NSCopying, _UIPreviewProvider;

@interface UITargetedPreview : NSObject <NSCopying>

@property (nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) BOOL defaultPreview;
@property (weak, nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) UIView *viewToSnapshot;
@property (readonly, nonatomic) id<_UIPreviewProvider> _PreviewProvider;
@property (readonly, nonatomic) BOOL sourceViewIsInViewHierarchy;
@property (readonly, nonatomic) BOOL hasCustomTarget;
@property (readonly, nonatomic, getter=_isVisible) BOOL _visible;
@property (readonly, nonatomic, getter=_isLikelyOpaque) BOOL _isLikelyOpaque;
@property (nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode;
@property (retain, nonatomic) id<NSCopying, NSObject> _internalIdentifier;
@property (retain, nonatomic) NSArray *transferrableAnimationKeys;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _frame;
@property (readonly, nonatomic) _UIShape *_outlineShape;
@property (nonatomic) BOOL _captureHierarchyBelowSourceView;
@property (nonatomic) BOOL _springboardPlatterStyle;
@property (retain, nonatomic, setter=_setOverridePositionTrackingView:) UIView *overridePositionTrackingView;
@property (nonatomic, getter=_prefersUnmaskedPlatterStyle, setter=_setPrefersUnmaskedPlatterStyle:) BOOL _prefersUnmaskedPlatterStyle;
@property (retain, nonatomic, getter=_accessoryViews, setter=_setAccessoryViews:) NSArray *_accessoryViews;
@property (readonly, nonatomic) UIPreviewTarget *target;
@property (readonly, nonatomic) UIView *view;
@property (readonly, copy, nonatomic) UIPreviewParameters *parameters;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithView:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 parameters:(id)a1 target:(id)a2;
- (id)_containerParentDescription;
- (id)_defaultTargetForView:(id)a0 withCenter:(struct CGPoint { double x0; double x1; })a1 version:(unsigned int)a2;
- (BOOL)_isRoughlyEqualToPreview:(id)a0;
- (BOOL)_mayInferCornerRadiusFromVisiblePath;
- (id)_trueSourceViewIfPortal;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
- (id)initWithView:(id)a0 parameters:(id)a1;
- (id)retargetedPreviewWithTarget:(id)a0;

@end
