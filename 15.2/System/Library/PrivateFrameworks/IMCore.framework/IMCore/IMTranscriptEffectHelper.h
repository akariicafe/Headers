@interface IMTranscriptEffectHelper : NSObject

+ (BOOL)isFeatureEnabled;
+ (void)setFeatureEnabled:(BOOL)a0;
+ (id)identifierNameMap;
+ (BOOL)identifierIsEffectIdentifier:(id)a0;
+ (id)allEffectIdentifiers;
+ (id)replayStringMap;
+ (id)sendWithEffectStringMap;
+ (BOOL)effectIdentifierIsFullScreenMoment:(id)a0;
+ (BOOL)effectIdentifierIsImpactEffect:(id)a0;
+ (id)findIdentifierByMathcingPartialSufix:(id)a0;
+ (id)nameForEffectIdentifier:(id)a0;
+ (id)replayStringForEffectIdentifier:(id)a0;
+ (id)sendWithStringForEffectIdentifier:(id)a0;
+ (BOOL)shouldShowReplayButtonForEffectIdentifier:(id)a0;

@end
