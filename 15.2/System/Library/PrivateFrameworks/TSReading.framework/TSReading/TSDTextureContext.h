@protocol TSDAnimationSession;

@interface TSDTextureContext : NSObject <NSCopying> {
    BOOL _shouldNotAddShapeAttributes;
}

@property (nonatomic) id<TSDAnimationSession> session;
@property (nonatomic) BOOL isMagicMove;
@property (nonatomic) BOOL shouldAddFinal;
@property (nonatomic) BOOL shouldAddReversedFinal;
@property (nonatomic) BOOL shouldAddMagicMoveObjectOnly;
@property (nonatomic) BOOL shouldDistortToFit;
@property (nonatomic) BOOL shouldNotAddContainedReps;
@property (nonatomic) BOOL shouldNotAddShapeAttributes;
@property (nonatomic) BOOL shouldNotAddText;
@property (nonatomic) BOOL shouldNotCacheTexture;
@property (nonatomic) BOOL shouldSeparateReflection;
@property (nonatomic) BOOL shouldSeparateShadow;
@property (nonatomic) BOOL shouldSeparateStroke;
@property (nonatomic) BOOL shouldSeparateText;
@property (nonatomic) BOOL shouldForceTextureGeneration;

+ (id)context;
+ (id)contextWithSession:(id)a0;
+ (id)contextWithTextureContext:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)reset;

@end
