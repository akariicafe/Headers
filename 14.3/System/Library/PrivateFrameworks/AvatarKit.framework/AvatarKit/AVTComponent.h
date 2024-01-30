@class NSArray, NSString, AVTMaterial, AVTMemoji;

@interface AVTComponent : NSObject {
    long long _type;
    AVTMemoji *_memoji;
    AVTMaterial *_materials[3];
}

@property (readonly) NSArray *assets;
@property (readonly) long long type;
@property (readonly, nonatomic) NSString *morphVariant;
@property (readonly, nonatomic) NSString *imageVariant;
@property (readonly, nonatomic) NSString *materialVariant;
@property (readonly, nonatomic) double morphVariantIntensity;
@property (readonly, nonatomic) double textureAssetPresence;
@property (readonly, nonatomic) BOOL mirrored;

- (id)memoji;
- (void).cxx_destruct;
- (id)description;
- (void)setMemoji:(id)a0;
- (id)materialAtIndex:(unsigned long long)a0;
- (void)setMaterial:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithType:(long long)a0 assets:(id)a1 morphVariant:(id)a2 imageVariant:(id)a3 materialVariant:(id)a4 morphVariantIntensity:(double)a5 textureAssetPresence:(double)a6 mirrored:(BOOL)a7;

@end
