@interface SiriTTSNeuralUtils : NSObject

+ (BOOL)hasANE;
+ (BOOL)isH12Platform;
+ (BOOL)hasAMX;
+ (BOOL)compileANEModel:(id)a0 error:(id *)a1;
+ (BOOL)isANEModelCompiled:(id)a0;
+ (BOOL)isANEOnly;
+ (BOOL)isNeuralPlatform;
+ (BOOL)isNeuralVoiceReady:(id)a0;
+ (BOOL)shouldUseNeuralVoice:(id)a0;

@end
