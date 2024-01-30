@class UIColor, NSDictionary;

@interface AVTMaterial : NSObject

@property (retain, nonatomic) UIColor *baseColor;
@property (retain, nonatomic) NSDictionary *additionalPropertyColors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)applyToSceneKitMaterial:(id)a0;

@end
