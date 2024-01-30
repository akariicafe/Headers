@protocol TSDAnimationSession;

@interface TSDTextureDescription : NSObject <NSCopying> {
    BOOL _shouldNotAddShapeAttributes;
}

@property (weak, nonatomic) id<TSDAnimationSession> session;
@property (nonatomic) BOOL isMagicMove;
@property (nonatomic) BOOL includesActionBuilds;
@property (nonatomic) BOOL shouldAddFinal;
@property (nonatomic) BOOL shouldAddMagicMoveObjectOnly;
@property (nonatomic) BOOL shouldDistortToFit;
@property (nonatomic) BOOL shouldNotAddContainedReps;
@property (nonatomic) BOOL shouldNotAddShapeAttributes;
@property (nonatomic) BOOL shouldNotAddText;
@property (nonatomic) BOOL shouldSeparateReflection;
@property (nonatomic) BOOL shouldSeparateShadow;
@property (nonatomic) BOOL shouldSeparateStroke;
@property (nonatomic) BOOL shouldAddParameterizedStroke;
@property (nonatomic) BOOL shouldReverseStrokeDrawing;
@property (nonatomic) BOOL shouldSeparateGroupedTextures;
@property (nonatomic) BOOL shouldSeparateText;
@property (nonatomic) BOOL shouldForceTextureGeneration;
@property (nonatomic) BOOL shouldIgnoreScaleInSourceImage;
@property (nonatomic) BOOL shouldAddMasks;
@property (nonatomic) unsigned long long stage;
@property (nonatomic) unsigned long long deliveryStyle;
@property (nonatomic) int byGlyphStyle;

+ (id)descriptionWithSession:(id)a0;
+ (id)descriptionWithTextureDescription:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)reset;

@end
