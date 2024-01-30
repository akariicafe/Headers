@class CAPortalLayer, UIView;

@interface SBPortalView : UIView

@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL matchesTransform;
@property (nonatomic) BOOL matchesPosition;
@property (nonatomic) BOOL allowsBackdropGroups;
@property (readonly, nonatomic) CAPortalLayer *portalLayer;

+ (Class)layerClass;

- (void)setMatchesPosition:(BOOL)a0;
- (BOOL)matchesAlpha;
- (void).cxx_destruct;
- (BOOL)hidesSourceView;
- (BOOL)allowsBackdropGroups;
- (id)description;
- (void)setHidesSourceView:(BOOL)a0;
- (void)setMatchesAlpha:(BOOL)a0;
- (BOOL)matchesPosition;
- (BOOL)matchesTransform;
- (id)portalLayer;
- (void)setMatchesTransform:(BOOL)a0;
- (void)setAllowsBackdropGroups:(BOOL)a0;

@end
