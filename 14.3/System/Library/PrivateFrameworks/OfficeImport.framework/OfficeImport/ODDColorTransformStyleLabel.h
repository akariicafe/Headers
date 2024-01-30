@class ODDFillColorList;

@interface ODDColorTransformStyleLabel : NSObject {
    ODDFillColorList *mFillColors;
    ODDFillColorList *mLineColors;
    ODDFillColorList *mEffectColors;
    ODDFillColorList *mTextLineColors;
    ODDFillColorList *mTextFillColors;
    ODDFillColorList *mTextEffectColors;
}

- (void)setFillColors:(id)a0;
- (void).cxx_destruct;
- (id)fillColors;
- (void)applyToShapeStyle:(id)a0 index:(unsigned int)a1 count:(unsigned int)a2 state:(id)a3;
- (id)lineColors;
- (id)effectColors;
- (id)textFillColors;
- (void)setLineColors:(id)a0;
- (void)setEffectColors:(id)a0;
- (id)textLineColors;
- (void)setTextLineColors:(id)a0;
- (void)setTextFillColors:(id)a0;
- (id)textEffectColors;
- (void)setTextEffectColors:(id)a0;

@end
