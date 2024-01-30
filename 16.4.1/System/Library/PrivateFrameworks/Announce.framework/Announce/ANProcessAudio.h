@interface ANProcessAudio : NSObject

+ (BOOL)process:(id)a0 to:(id)a1 withOptions:(unsigned long long)a2 error:(id *)a3;
+ (id)_lookupTunings:(unsigned long long)a0;
+ (id)_ANAudioEffectToName:(unsigned long long)a0;
+ (BOOL)_configureEngine:(id)a0 player:(id)a1 effect:(id)a2 sourceFile:(id)a3 error:(id *)a4;
+ (struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })_lookupComponent:(unsigned long long)a0;
+ (BOOL)_renderAudioTo:(id)a0 length:(long long)a1 engine:(id)a2 error:(id *)a3;

@end
