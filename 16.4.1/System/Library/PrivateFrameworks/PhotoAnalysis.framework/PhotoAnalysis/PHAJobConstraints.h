@interface PHAJobConstraints : NSObject <NSCopying>

@property (nonatomic, getter=isTurboMode) BOOL turboMode;
@property (nonatomic) BOOL cancelsTurboMode;
@property (readonly, nonatomic) BOOL canRunAutomaticBackgroundAnalysis;
@property (readonly, nonatomic) BOOL canRunAutomaticForegroundAnalysis;
@property (readonly, nonatomic) BOOL canRunUserInitiatedForegroundAnalysis;
@property (readonly, nonatomic) BOOL canUseNetwork;

+ (id)constraintsWithAllAllowances;
+ (id)constraintsWithNoAllowances;

- (id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)a0 canRunAutomaticForegroundAnalysis:(BOOL)a1 canRunUserInitiatedForegroundAnalysis:(BOOL)a2 canUseNetwork:(BOOL)a3;
- (id)statusAsDictionary;
- (void)applyConstraints:(id)a0 usingMask:(id)a1;
- (unsigned int)qosClassForProcessing;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromBitString:(id)a0;
- (BOOL)isEqualToConstraints:(id)a0;
- (id)description;
- (id)asBitString;

@end
