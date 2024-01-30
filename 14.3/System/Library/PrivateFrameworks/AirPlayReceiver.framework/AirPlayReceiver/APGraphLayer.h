@interface APGraphLayer : CALayer {
    float **_Values;
    float *_Mins;
    float *_Maxes;
    int *_StartIndex;
    int *_NumValues;
    int _NumGraphs;
    struct CGPoint { double x0; double x1; } *_Lines;
    int _MaxLength;
    struct __CTFont { } *_Font;
    struct __CFDictionary { } *_TextAttributes;
}

+ (struct CGColor { } *)copyGraphColorWithIndex:(int)a0;

- (id)init;
- (void)dealloc;
- (void)setUpGraphs:(int)a0;
- (void)setUpGraph:(int)a0 min:(float)a1 max:(float)a2 numValues:(int)a3;
- (void)updateValue:(int)a0 value:(float)a1;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
