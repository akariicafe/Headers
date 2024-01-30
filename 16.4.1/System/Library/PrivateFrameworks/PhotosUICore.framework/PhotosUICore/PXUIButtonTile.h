@class NSArray, NSString, UIView, PXButtonSpec, UIButton;
@protocol PXUIButtonTileDelegate;

@interface PXUIButtonTile : NSObject <PXUIViewBasicTile, PXReusableObject> {
    BOOL _hasScheduledUpdate;
    struct { BOOL button; } _needsUpdateFlags;
}

@property (readonly, nonatomic) UIView *_view;
@property (readonly, nonatomic) UIButton *_button;
@property (retain, nonatomic, setter=_setSpec:) PXButtonSpec *_spec;
@property (copy, nonatomic, setter=_setLayoutConstraints:) NSArray *_layoutConstraints;
@property (weak, nonatomic) id<PXUIButtonTileDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateIfNeeded;
- (void)becomeReusable;
- (BOOL)_needsUpdate;
- (void)prepareForReuse;
- (void)_setNeedsUpdate;
- (id)init;
- (void).cxx_destruct;
- (void)_handleButton:(id)a0;
- (void)_invalidateButton;
- (void)_updateButtonIfNeeded;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
