@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) NSNumber *effectScale;
@property (retain, nonatomic) NSOrderedSet *components;
@property (readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectShapeOpacity;
@property (readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectOutputOpacity;

+ (id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
+ (id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;

- (id)effectPreset;
- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (BOOL)canBePackedWithDocument:(id)a0;
- (void)setComponentsFromEffectPreset:(id)a0 withDocument:(id)a1;
- (id)componentOfType:(unsigned int)a0;
- (void)replaceComponentsWithComponentsFromEffectRendition:(id)a0 withDocument:(id)a1;

@end
