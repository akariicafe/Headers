@class UIColor, SKTexture, NSDictionary, NSString, SKLightNode, SKShader, SKWarpGeometry;

@interface SKSpriteNode : SKNode <SKWarpable> {
    void *_skcSpriteNode;
    SKLightNode *_light;
}

@property (nonatomic) BOOL shouldRepeatTexture;
@property (nonatomic) struct CGSize { double x0; double x1; } repeatTextureSize;
@property (retain, nonatomic) SKTexture *texture;
@property (retain, nonatomic) SKTexture *normalTexture;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic) unsigned int shadowCastBitMask;
@property (nonatomic) unsigned int shadowedBitMask;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } centerRect;
@property (nonatomic) double colorBlendFactor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long blendMode;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (retain, nonatomic) SKWarpGeometry *warpGeometry;
@property (nonatomic) long long subdivisionLevels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;
+ (id)spriteNodeWithTexture:(id)a0;
+ (id)spriteNodeWithImageNamed:(id)a0;
+ (id)spriteNodeWithImageNamed:(id)a0 normalMapped:(BOOL)a1;
+ (id)spriteNodeWithTexture:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)spriteNodeWithTexture:(id)a0 normalMap:(id)a1;
+ (id)spriteNodeWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void)encodeWithCoder:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)initWithTexture:(id)a0;
- (BOOL)isEqualToNode:(id)a0;
- (BOOL)_pathFromTextureToPoints:(void **)a0 outSize:(unsigned long long *)a1 accuracy:(float)a2;
- (void *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)initWithImageNamed:(id)a0;
- (id)valueForAttributeNamed:(id)a0;
- (void)setValue:(id)a0 forAttributeNamed:(id)a1;
- (id)initWithTexture:(id)a0 color:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)initWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)scaleToSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)repeatTexture;
- (void)setRepeatTexture:(BOOL)a0;

@end
