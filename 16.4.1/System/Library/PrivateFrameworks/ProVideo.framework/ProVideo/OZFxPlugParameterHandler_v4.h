@class NSString;

@interface OZFxPlugParameterHandler_v4 : OZFxPlugParameterHandler <FxParameterCreationAPI_v4, FxParameterRetrievalAPI_v4, FxParameterRetrievalAPI_v5, FxParameterSettingAPI_v4, FxOptionalParameterRetrievalAPI_v2, FxOptionalParameterSettingAPI_v2>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)imageSize:(struct CGSize { double x0; double x1; } *)a0 fromParameter:(unsigned int)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)setStringParameterValue:(id)a0 toParm:(unsigned int)a1;
- (BOOL)getBoolValue:(BOOL *)a0 fromParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)setCustomParameterValue:(id)a0 toParm:(unsigned int)a1;
- (BOOL)_getFontName:(id *)a0 fromParm:(unsigned int)a1 atTime:(union { double x0; struct *x1; })a2;
- (BOOL)addFlags:(unsigned int)a0 toParm:(unsigned int)a1;
- (BOOL)addFontMenuWithName:(id)a0 parmId:(unsigned int)a1 fontName:(id)a2 parmFlags:(unsigned int)a3;
- (BOOL)addHelpButtonWithName:(id)a0 parmId:(unsigned int)a1 selector:(SEL)a2 parmFlags:(unsigned int)a3;
- (BOOL)addPushButtonWithName:(id)a0 parmId:(unsigned int)a1 selector:(SEL)a2 parmFlags:(unsigned int)a3;
- (BOOL)getBitmap:(id *)a0 layerOffsetX:(double *)a1 layerOffsetY:(double *)a2 requestInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3 fromParm:(unsigned int)a4 atFxTime:(union { double x0; struct *x1; })a5;
- (BOOL)getCustomParameterValue:(id *)a0 fromParm:(unsigned int)a1;
- (BOOL)getCustomParameterValue:(id *)a0 fromParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)getFloatValue:(double *)a0 fromParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)getFontName:(id *)a0 fromParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)getFontName:(id *)a0 fromParm:(unsigned int)a1 atTime:(double)a2;
- (BOOL)getGradientSamples:(void *)a0 numSamples:(unsigned long long)a1 depth:(unsigned long long)a2 fromParm:(unsigned int)a3 atFxTime:(union { double x0; struct *x1; })a4;
- (BOOL)getGradientStartEnd:(double *)a0 startY:(double *)a1 endX:(double *)a2 endY:(double *)a3 type:(int *)a4 fromParm:(unsigned int)a5 atFxTime:(union { double x0; struct *x1; })a6;
- (BOOL)getHistogramBlackIn:(double *)a0 BlackOut:(double *)a1 WhiteIn:(double *)a2 WhiteOut:(double *)a3 Gamma:(double *)a4 forChannel:(unsigned long long)a5 fromParm:(unsigned int)a6 atFxTime:(union { double x0; struct *x1; })a7;
- (BOOL)getIntValue:(int *)a0 fromParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)getParameterFlags:(unsigned int *)a0 fromParm:(unsigned int)a1;
- (BOOL)getPathID:(void **)a0 fromParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)getRGBABitmap:(id *)a0 layerOffsetX:(double *)a1 layerOffsetY:(double *)a2 requestInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3 fromParameter:(unsigned int)a4 atTime:(union { double x0; struct *x1; })a5;
- (BOOL)getRedValue:(double *)a0 greenValue:(double *)a1 blueValue:(double *)a2 alphaValue:(double *)a3 fromParm:(unsigned int)a4 atFxTime:(union { double x0; struct *x1; })a5;
- (BOOL)getRedValue:(double *)a0 greenValue:(double *)a1 blueValue:(double *)a2 fromParm:(unsigned int)a3 atFxTime:(union { double x0; struct *x1; })a4;
- (BOOL)getStringParameterValue:(id *)a0 fromParm:(unsigned int)a1;
- (BOOL)getTexture:(id *)a0 layerOffsetX:(double *)a1 layerOffsetY:(double *)a2 requestInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3 fromParm:(unsigned int)a4 atFxTime:(union { double x0; struct *x1; })a5;
- (BOOL)getXValue:(double *)a0 YValue:(double *)a1 fromParm:(unsigned int)a2 atFxTime:(union { double x0; struct *x1; })a3;
- (id)pushButtonSelectorNameForParameterID:(unsigned int)a0;
- (BOOL)removeFlags:(unsigned int)a0 fromParm:(unsigned int)a1;
- (BOOL)setBoolValue:(BOOL)a0 toParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)setCustomParameterValue:(id)a0 toParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)setFloatValue:(double)a0 toParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)setHistogramBlackIn:(double)a0 blackOut:(double)a1 whiteIn:(double)a2 whiteOut:(double)a3 gamma:(double)a4 forChannel:(unsigned long long)a5 fromParm:(unsigned int)a6 atFxTime:(union { double x0; struct *x1; })a7;
- (BOOL)setIntValue:(int)a0 toParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)setParameterFlags:(unsigned int)a0 toParm:(unsigned int)a1;
- (BOOL)setPathID:(void *)a0 toParm:(unsigned int)a1 atFxTime:(union { double x0; struct *x1; })a2;
- (BOOL)setRedValue:(double)a0 greenValue:(double)a1 blueValue:(double)a2 alphaValue:(double)a3 toParm:(unsigned int)a4 atFxTime:(union { double x0; struct *x1; })a5;
- (BOOL)setRedValue:(double)a0 greenValue:(double)a1 blueValue:(double)a2 toParm:(unsigned int)a3 atFxTime:(union { double x0; struct *x1; })a4;
- (BOOL)setXValue:(double)a0 YValue:(double)a1 toParm:(unsigned int)a2 atFxTime:(union { double x0; struct *x1; })a3;

@end
