@class UIColor, NSDictionary;

@interface AVTMaterial : NSObject

@property (retain) UIColor *baseColor;
@property (retain) NSDictionary *secondaryColors;

+ (id)materialWithColor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_encode:(id)a0;
- (BOOL)_decode:(id)a0;
- (void)applyToSceneKitMaterial:(id)a0;

@end
