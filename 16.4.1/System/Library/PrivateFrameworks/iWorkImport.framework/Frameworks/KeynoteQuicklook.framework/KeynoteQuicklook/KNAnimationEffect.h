@class KNAnimationContext, NSString, NSArray, NSDictionary;

@interface KNAnimationEffect : NSObject <KNAnimationPlugin> {
    KNAnimationContext *mAnimationContext;
}

@property (class, readonly, nonatomic) NSString *animationName;
@property (class, readonly, nonatomic) long long animationCategory;
@property (class, readonly, nonatomic) NSString *animationFilter;
@property (class, readonly, nonatomic) NSArray *supportedTypes;
@property (class, readonly, nonatomic) unsigned long long directionType;
@property (class, readonly, nonatomic) NSDictionary *defaultAttributes;
@property (class, readonly, nonatomic) NSArray *customAttributes;
@property (class, readonly, nonatomic) BOOL isResponsibleForDrawingAllTextures;
@property (class, readonly, nonatomic) BOOL isCARendererBased;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fillLocalizedDirectionMenu:(id)a0 forType:(long long)a1;
+ (id)localizedMenuString:(long long)a0;
+ (id)thumbnailImageNameForType:(long long)a0;
+ (id)updateDirectionAttributeValue:(long long)a0 andCustomTextDirectionValue:(unsigned long long)a1 turnOffBounce:(BOOL)a2 turnOffMotionBlur:(BOOL)a3 forAttributes:(id)a4;

- (id)initWithAnimationContext:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })mvpMatrixWithContext:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })mvpMatrixWithTexture:(id)a0 andFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })perspectiveMVPMatrixWithContext:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })perspectiveMVPMatrixWithTexture:(id)a0 andFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
