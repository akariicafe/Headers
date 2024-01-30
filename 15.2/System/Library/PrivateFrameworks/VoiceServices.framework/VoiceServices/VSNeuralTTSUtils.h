@interface VSNeuralTTSUtils : NSObject

+ (BOOL)hasAMX;
+ (BOOL)hasANE;
+ (BOOL)isNeuralVoiceReady:(id)a0;
+ (BOOL)isNeuralTTSPlatform;
+ (BOOL)shouldUseNeuralVoice:(id)a0;
+ (BOOL)hasCompactNeuralFallback:(id)a0;
+ (BOOL)isNeuralFallbackCondition;
+ (BOOL)hasOTAANEModel:(id)a0;
+ (BOOL)isANEModelCompiled:(id)a0;
+ (void)compileANEModel:(id)a0;
+ (BOOL)isANECompilationPlatform;

@end
