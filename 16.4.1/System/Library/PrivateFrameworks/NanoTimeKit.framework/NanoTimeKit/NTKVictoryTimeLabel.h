@class UIColor, NSHashTable;

@interface NTKVictoryTimeLabel : NTKDigitalTimeLabel

@property (nonatomic) double additionalPaddingInsets;
@property (retain, nonatomic) NSHashTable *labels;
@property (retain, nonatomic) UIColor *outlineColor;
@property (nonatomic) double outlineAlpha;

- (void).cxx_destruct;
- (id)_newUnderlyingLabel:(BOOL)a0;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1 additionalPaddingInsets:(double)a2;

@end
