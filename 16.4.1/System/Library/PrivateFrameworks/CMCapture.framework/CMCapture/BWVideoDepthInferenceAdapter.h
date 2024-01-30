@interface BWVideoDepthInferenceAdapter : NSObject

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)inferenceProvidersForType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2 resourceProvider:(id)a3 status:(int *)a4;

@end
