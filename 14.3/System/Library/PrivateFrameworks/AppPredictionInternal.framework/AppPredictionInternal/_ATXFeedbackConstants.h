@interface _ATXFeedbackConstants : NSObject

@property (class, readonly) double baseAlpha;
@property (class, readonly) double baseBeta;
@property (class, readonly) double multiplierForAppAlphasAndBetas;
@property (class, readonly) double decayHalfLifeSeconds;
@property (class, readonly) double actionDecayHalfLifeSeconds;

+ (double)alphaForBundleId:(id)a0;
+ (double)betaForBundleId:(id)a0;

- (id)init;

@end
