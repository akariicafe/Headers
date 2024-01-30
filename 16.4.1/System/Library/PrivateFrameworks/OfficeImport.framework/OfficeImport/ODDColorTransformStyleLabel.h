@class ODDFillColorList;

@interface ODDColorTransformStyleLabel : NSObject {
    ODDFillColorList *mFillColors;
    ODDFillColorList *mLineColors;
    ODDFillColorList *mEffectColors;
    ODDFillColorList *mTextLineColors;
    ODDFillColorList *mTextFillColors;
    ODDFillColorList *mTextEffectColors;
}

- (void).cxx_destruct;
- (id)fillColors;
- (void)setFillColors:(id)a0;
- (void)applyToShapeStyle:(id)a0 index:(unsigned int)a1 count:(unsigned int)a2 state:(id)a3;
- (id)effectColors;
- (id)lineColors;
- (void)setEffectColors:(id)a0;
- (void)setLineColors:(id)a0;
- (void)setTextEffectColors:(id)a0;
- (void)setTextFillColors:(id)a0;
- (void)setTextLineColors:(id)a0;
- (id)textEffectColors;
- (id)textFillColors;
- (id)textLineColors;

@end
