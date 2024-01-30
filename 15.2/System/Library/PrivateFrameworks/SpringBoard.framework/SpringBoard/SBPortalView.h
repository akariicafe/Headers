@class CAPortalLayer, UIView;

@interface SBPortalView : UIView

@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL matchesTransform;
@property (nonatomic) BOOL matchesPosition;
@property (nonatomic) BOOL allowsBackdropGroups;
@property (nonatomic) BOOL passesTouchesThrough;
@property (readonly, nonatomic) CAPortalLayer *portalLayer;

+ (Class)layerClass;

- (BOOL)hidesSourceView;
- (void)setMatchesAlpha:(BOOL)a0;
- (void)setHidesSourceView:(BOOL)a0;
- (BOOL)allowsBackdropGroups;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)matchesTransform;
- (id)description;
- (void).cxx_destruct;
- (void)setAllowsBackdropGroups:(BOOL)a0;
- (id)portalLayer;
- (void)setMatchesTransform:(BOOL)a0;
- (BOOL)matchesPosition;
- (void)setMatchesPosition:(BOOL)a0;
- (BOOL)matchesAlpha;

@end
