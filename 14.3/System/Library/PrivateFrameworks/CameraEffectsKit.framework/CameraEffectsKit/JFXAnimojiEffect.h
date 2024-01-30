@class UIImage;

@interface JFXAnimojiEffect : JFXEffect

@property (readonly, nonatomic) UIImage *thumbnail;

+ (BOOL)supportsSecureCoding;
+ (id)createMemojiEffectWithContentsOfFile:(id)a0 identifier:(id)a1;
+ (id)createAnimojiEffectForID:(id)a0;
+ (id)animojiIDs;
+ (BOOL)isAvatarKitAvailable;

- (id)dataRepresentation;
- (id)displayName;
- (id)renderEffect;
- (unsigned long long)avatarVersionNumber;
- (id)initWithEffectID:(id)a0;
- (struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })_convertRenderEffectPoints:(struct PVCGPointQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a0 toBasisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basisOrigin:(int)a2;
- (void)_convertRenderEffectPoints:(struct CGPoint { double x0; double x1; } *)a0 numPoints:(unsigned long long)a1 toBasisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 basisOrigin:(int)a3;
- (void)_convertRenderEffectPoints:(struct CGPoint { double x0; double x1; } *)a0 numPoints:(unsigned long long)a1 fromBasisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 basisOrigin:(int)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransformFromEffectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 basisOrigin:(int)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 basisOrigin:(int)a1;

@end
