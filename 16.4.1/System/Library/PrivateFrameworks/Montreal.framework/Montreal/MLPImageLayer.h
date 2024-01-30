@class NSArray, NSMutableDictionary;

@interface MLPImageLayer : MLPLayer

@property (readonly) NSArray *inputToSecondKernel;
@property (readonly) NSArray *inputToFirstKernel;
@property (readonly) NSArray *primaryCurrentState;
@property (readonly) NSArray *secondaryCurrentState;
@property (readonly) NSMutableDictionary *inputImagesToSecondKernel;
@property (readonly) NSMutableDictionary *inputImagesToFirstKernel;
@property (readonly) NSMutableDictionary *primaryCurrentStates;
@property (readonly) NSMutableDictionary *secondaryCurrentStates;

- (void).cxx_destruct;
- (void)allocateInputDictionaries;
- (id)generateNode:(id)a0 model:(id)a1 weightIter:(unsigned long long *)a2 params:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a3;
- (id)initWithLayerType:(unsigned long long)a0 name:(id)a1 neuronType:(int)a2 neuronParams:(id)a3;
- (id)initWithLayerType:(unsigned long long)a0 name:(id)a1 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a2;
- (void)updateInputToFirstKernel:(id)a0 index:(id)a1 inference:(BOOL)a2;
- (void)updateInputToFirstKernel:(id)a0 inference:(BOOL)a1;
- (void)updateInputToSecondKernel:(id)a0 index:(id)a1 inference:(BOOL)a2;
- (void)updateInputToSecondKernel:(id)a0 inference:(BOOL)a1;
- (void)updatePrimaryCurrentState:(id)a0 index:(id)a1 inference:(BOOL)a2;
- (void)updatePrimaryCurrentState:(id)a0 inference:(BOOL)a1;
- (void)updateSecondaryCurrentState:(id)a0 index:(id)a1 inference:(BOOL)a2;
- (void)updateSecondaryCurrentState:(id)a0 inference:(BOOL)a1;

@end
