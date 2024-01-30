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
- (void)setAllowsBackdropGroups:(BOOL)a0;
- (id)portalLayer;
- (void)setHidesSourceView:(BOOL)a0;
- (BOOL)matchesTransform;
- (void)setMatchesTransform:(BOOL)a0;
- (void)setMatchesAlpha:(BOOL)a0;
- (BOOL)allowsBackdropGroups;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)matchesAlpha;
- (BOOL)matchesPosition;
- (id)description;
- (void).cxx_destruct;
- (void)setMatchesPosition:(BOOL)a0;

@end
