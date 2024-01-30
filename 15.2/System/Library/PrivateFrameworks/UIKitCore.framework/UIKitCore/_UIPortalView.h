@class NSString, CAPortalLayer, UIView;

@interface _UIPortalView : UIView

@property (nonatomic, getter=_isGeometryFrozen, setter=_setGeometryFrozen:) BOOL _geometryFrozen;
@property (weak, nonatomic) UIView *sourceView;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL matchesTransform;
@property (nonatomic) BOOL matchesPosition;
@property (nonatomic) BOOL allowsBackdropGroups;
@property (nonatomic) BOOL allowsHitTesting;
@property (nonatomic) BOOL forwardsClientHitTestingToSourceView;
@property (readonly, nonatomic) CAPortalLayer *portalLayer;

+ (Class)layerClass;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setAllowsHitTesting:(BOOL)a0;
- (BOOL)hidesSourceView;
- (void)setMatchesAlpha:(BOOL)a0;
- (void)setHidesSourceView:(BOOL)a0;
- (BOOL)allowsBackdropGroups;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)matchesTransform;
- (id)description;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setAllowsBackdropGroups:(BOOL)a0;
- (id)portalLayer;
- (void)setMatchesTransform:(BOOL)a0;
- (BOOL)matchesPosition;
- (void)setMatchesPosition:(BOOL)a0;
- (id)initWithSourceView:(id)a0;
- (BOOL)allowsHitTesting;
- (BOOL)matchesAlpha;

@end
