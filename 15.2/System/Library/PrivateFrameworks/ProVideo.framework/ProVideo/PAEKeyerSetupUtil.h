@class PAEKeyerLumaSetup, PAEKeyerCbCrSetup;

@interface PAEKeyerSetupUtil : NSObject {
    void *_omKeyer;
    PAEKeyerCbCrSetup *_keyerCbCrSetup;
    PAEKeyerLumaSetup *_keyerLumaSetup;
    void *_omSamples;
}

- (BOOL)tight;
- (void)dealloc;
- (void *)omKeyer;
- (BOOL)autoScale;
- (id)initWithOMSamples:(void *)a0 colorPrimaries:(int)a1 atTime:(union { double x0; struct *x1; })a2;
- (double)shadowsGain;
- (double)highlightsGain;
- (double)spreadGain;
- (void)syncWithDB:(union { double x0; struct *x1; })a0 setAsDefault:(BOOL)a1;
- (void)syncChromaWithDB:(union { double x0; struct *x1; })a0;
- (void)syncLumaWithDB:(union { double x0; struct *x1; })a0;
- (void)removeKeyframeAtTime:(union { double x0; struct *x1; })a0 forParam:(int)a1 withAPI:(id)a2;
- (void)removeKeyframeAtTime:(union { double x0; struct *x1; })a0;
- (double)autoAdjustSoftGap;
- (double)simpleKeyAmount;
- (double)autoKeySoftness;
- (BOOL)addTolerance;
- (void)setAddTolerance:(BOOL)a0;
- (BOOL)defineEdge;
- (void)setDefineEdge:(BOOL)a0;
- (BOOL)keyerActiveAt:(union { double x0; struct *x1; })a0;

@end
