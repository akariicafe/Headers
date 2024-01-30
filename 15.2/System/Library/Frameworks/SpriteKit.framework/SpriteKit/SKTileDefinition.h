@class NSString, NSArray, NSMutableDictionary, SKTileGroupRule, NSMutableArray;

@interface SKTileDefinition : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_textures;
    NSMutableArray *_normals;
    unsigned long long _orientation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) SKTileGroupRule *parentRule;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) unsigned short currentFrameIndex;
@property (nonatomic) double lastTargetTime;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) BOOL frameDidChange;
@property (nonatomic) BOOL nextFrameAffectsVertexBuffer;
@property (copy, nonatomic) NSArray *textures;
@property (copy, nonatomic) NSArray *normalTextures;
@property (retain, nonatomic) NSMutableDictionary *userData;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double timePerFrame;
@property (nonatomic) unsigned long long placementWeight;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) BOOL flipVertically;
@property (nonatomic) BOOL flipHorizontally;

+ (id)tileDefinitionWithTexture:(id)a0;
+ (id)tileDefinitionWithTexture:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)tileDefinitionWithTexture:(id)a0 normalTexture:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)tileDefinitionWithTextures:(id)a0 size:(struct CGSize { double x0; double x1; })a1 timePerFrame:(double)a2;
+ (id)tileDefinitionWithTextures:(id)a0 normalTextures:(id)a1 size:(struct CGSize { double x0; double x1; })a2 timePerFrame:(double)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)initWithTexture:(id)a0;
- (BOOL)isEqualToNode:(id)a0;
- (void)setDataWithTexture:(id)a0 normalTexture:(id)a1 tileName:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)setDataWithTextures:(id)a0 normalTextures:(id)a1 timePerFrame:(double)a2 tileName:(id)a3 size:(struct CGSize { double x0; double x1; })a4;
- (id)initWithTexture:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTexture:(id)a0 normalTexture:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)initWithTextures:(id)a0 size:(struct CGSize { double x0; double x1; })a1 timePerFrame:(double)a2;
- (id)initWithTextures:(id)a0 normalTextures:(id)a1 size:(struct CGSize { double x0; double x1; })a2 timePerFrame:(double)a3;

@end
