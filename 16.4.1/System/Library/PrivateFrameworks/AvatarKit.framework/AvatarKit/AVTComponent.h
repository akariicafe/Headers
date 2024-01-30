@class NSArray, NSString, AVTMaterial;

@interface AVTComponent : NSObject {
    long long _type;
    AVTMaterial *_materials[3];
}

@property (readonly) NSArray *assets;
@property (readonly) long long type;
@property (readonly, nonatomic) NSString *morphVariant;
@property (readonly, nonatomic) NSString *imageVariant;
@property (readonly, nonatomic) NSString *materialVariant;
@property (readonly, nonatomic) NSString *bodyPoseVariant;
@property (readonly, nonatomic) float morphVariantIntensity;
@property (readonly, nonatomic) float bodyPoseVariantIntensity;
@property (readonly, nonatomic) float textureAssetPresence;
@property (readonly, nonatomic) BOOL mirrored;

- (id)materialAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 assets:(id)a1 morphVariant:(id)a2 imageVariant:(id)a3 materialVariant:(id)a4 bodyPoseVariant:(id)a5 morphVariantIntensity:(float)a6 bodyPoseVariantIntensity:(float)a7 textureAssetPresence:(float)a8 mirrored:(BOOL)a9;
- (void)setMaterial:(id)a0 atIndex:(unsigned long long)a1;

@end
