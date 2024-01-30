@class PDAnimateMotionBehavior, NSString, PDBuild, PDAnimationTarget;

@interface PDAnimationCache : NSObject

@property (retain, nonatomic) PDAnimationTarget *target;
@property (nonatomic) int nodeType;
@property (nonatomic) int presetId;
@property (nonatomic) int presetSubType;
@property (nonatomic) int presetClass;
@property (nonatomic) int iterateType;
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) double delay;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) double direction;
@property (nonatomic) BOOL hasPartCount;
@property (nonatomic) int partCount;
@property (retain, nonatomic) PDAnimateMotionBehavior *motionPath;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) BOOL isHead;
@property (nonatomic) int level;
@property (retain, nonatomic) PDBuild *build;

+ (id)createAnimationInfoDataForCacheItem:(id)a0 order:(unsigned int)a1;
+ (void)loadAnimationCache:(id)a0 pdAnimation:(id)a1 state:(id)a2;
+ (void)mapAnimationInfo:(id)a0 cacheData:(id)a1 state:(id)a2;
+ (void)mapCommonData:(id)a0 cacheData:(id)a1 state:(id)a2;

- (void).cxx_destruct;
- (id)initWithAnimationInfo:(id)a0;

@end
