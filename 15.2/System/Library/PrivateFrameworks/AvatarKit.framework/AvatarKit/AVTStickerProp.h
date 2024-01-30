@class SCNNode, NSString, NSArray;

@interface AVTStickerProp : NSObject <NSCopying>

@property (class, nonatomic) BOOL cacheEnabled;

@property (retain, nonatomic) SCNNode *node;
@property (copy, nonatomic) NSString *originalName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL orientToCamera;
@property (readonly, nonatomic) BOOL renderLast;
@property (readonly, nonatomic) NSArray *palettesDescriptions;
@property (copy, nonatomic) NSArray *shaderModifiers;
@property (readonly, nonatomic) NSArray *adjustments;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) void /* unknown type, empty encoding */ rotation;
@property (nonatomic) double opacity;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *nodeName;

+ (void /* unknown type, empty encoding */)getPositionInDictionary:(id)a0;
+ (void /* unknown type, empty encoding */)getRotationInDictionary:(id)a0;
+ (void /* unknown type, empty encoding */)getScaleInDictionary:(id)a0;
+ (struct CGSize { double x0; double x1; })getSizeInDictionary:(id)a0;
+ (float)getOpacityInDictionary:(id)a0;
+ (BOOL)getOrientToCameraInDictionary:(id)a0;
+ (BOOL)getRenderLastInDictionary:(id)a0;
+ (id)adjustmentFromDictionary:(id)a0 presetCategory:(id)a1;
+ (id)stickerPropCache;
+ (id)cacheKeyForSize:(id)a0 position:(SEL)a1 rotation:(struct CGSize { double x0; double x1; })a2 scale:(id)a3 palettesDescriptions:(id)a4 filePath:(void /* unknown type, empty encoding */)a5;
+ (id)propFromDictionary:(id)a0 assetsPath:(id)a1;
+ (void)applyPalettesForAvatar:(id)a0 toNode:(id)a1 palettesDescriptions:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)buildNodeForAvatar:(id)a0 withCamera:(id)a1 forExport:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)updateNode:(id)a0 withContentAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)stickerGenerationWillBegin;
- (void)stickerGenerationDidEnd;
- (id)cloneWithShaderModifiers:(id)a0;
- (id)initWithSize:(id)a0 scale:(SEL)a1 position:(struct CGSize { double x0; double x1; })a2 renderLast:(BOOL)a3 orientToCamera:(BOOL)a4 rotation:(id)a5 palettesDescriptions:(id)a6 shaderModifiers:(id)a7 adjustments:(void /* unknown type, empty encoding */)a8;
- (id)dictionaryWithTargetPath:(id)a0;
- (void)applyCamera:(id)a0 toNode:(id)a1 distToHead:(double)a2;

@end
