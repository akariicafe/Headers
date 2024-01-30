@class NSString, NSArray, NSDictionary;

@interface KNBuildAppear : KNAnimationEffect <KNBuildCAAnimator>

@property (class, readonly, nonatomic) BOOL requiresSingleTexturePerStage;
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

- (void)addAnimationsTo:(id)a0 context:(id)a1;

@end
