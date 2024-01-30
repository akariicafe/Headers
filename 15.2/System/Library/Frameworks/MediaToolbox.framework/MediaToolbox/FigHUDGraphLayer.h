@class NSMutableArray;

@interface FigHUDGraphLayer : CALayer {
    float **_Values;
    NSMutableArray *_valueLabels;
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

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setUpGraphs:(int)a0;
- (void)updateValue:(int)a0 value:(float)a1 label:(id)a2;
- (void)setUpGraph:(int)a0 min:(float)a1 max:(float)a2 numValues:(int)a3;
- (void)updateValue:(int)a0 value:(float)a1;
- (id)init;
- (void)dealloc;

@end
