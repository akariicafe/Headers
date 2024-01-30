@interface _MLCGPUPadding : _MLCGPULayer

+ (unsigned long long)mpsImageEdgeModeFor:(int)a0;
+ (id)layerWithDevice:(id)a0 paddingType:(int)a1 paddingLeft:(unsigned long long)a2 paddingRight:(unsigned long long)a3 paddingTop:(unsigned long long)a4 paddingBottom:(unsigned long long)a5 constantValue:(float)a6;

- (id)initWithDevice:(id)a0 paddingType:(int)a1 paddingLeft:(unsigned long long)a2 paddingRight:(unsigned long long)a3 paddingTop:(unsigned long long)a4 paddingBottom:(unsigned long long)a5 constantValue:(float)a6;

@end
