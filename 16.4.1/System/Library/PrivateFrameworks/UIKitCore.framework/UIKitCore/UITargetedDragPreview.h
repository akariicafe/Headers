@class NSString, NSDictionary, _DUIPreview, UIView, _UIDraggingImageComponent;
@protocol _UIDragPreviewProvider;

@interface UITargetedDragPreview : UITargetedPreview <_UIDragPreviewProvider> {
    BOOL _didSetLiftAnchorPoint;
    _DUIPreview *_duiPreview;
    _UIDraggingImageComponent *_imageComponent;
}

@property (nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) BOOL defaultPreview;
@property (nonatomic, getter=_applyTargetTransformToFlock, setter=_setApplyTargetTransformToFlock:) BOOL _applyTargetTransformToFlock;
@property (nonatomic, getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:) BOOL preventAfterScreenUpdatesSnapshot;
@property (weak, nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) UIView *viewToSnapshot;
@property (readonly, nonatomic) id<_UIDragPreviewProvider> _dragPreviewProvider;
@property (nonatomic, setter=_setPreferredStackOrder:) long long _preferredStackOrder;
@property (nonatomic, setter=_setInitialBadgeLocation:) struct CGPoint { double x; double y; } _initialBadgeLocation;
@property (nonatomic) struct CGPoint { double x; double y; } liftAnchorPoint;
@property (readonly, nonatomic) _DUIPreview *_duiPreview;
@property (copy, nonatomic) NSDictionary *_springboardParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewForURL:(id)a0 target:(id)a1;
+ (id)previewForURL:(id)a0 title:(id)a1 target:(id)a2;

- (void).cxx_destruct;
- (id)initWithView:(id)a0 parameters:(id)a1 target:(id)a2;
- (void)_resetPreview;
- (void)_setPreviewMode:(long long)a0;
- (id)imageComponent;
- (id)retargetedPreviewWithTarget:(id)a0;
- (void)takeLiftAnchorPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;

@end
