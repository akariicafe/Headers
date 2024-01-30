@class PAEKeyerLumaSetup, PAEKeyerCbCrSetup;

@interface PAEKeyerSetupUtil : NSObject {
    void *_omKeyer;
    PAEKeyerCbCrSetup *_keyerCbCrSetup;
    PAEKeyerLumaSetup *_keyerLumaSetup;
    void *_omSamples;
}

- (void)dealloc;
- (void *)omKeyer;
- (double)simpleKeyAmount;
- (double)autoKeySoftness;
- (void)syncLumaWithDB:(union { double x0; struct *x1; })a0;
- (BOOL)addTolerance;
- (double)autoAdjustSoftGap;
- (BOOL)autoScale;
- (BOOL)defineEdge;
- (double)highlightsGain;
- (id)initWithOMSamples:(void *)a0 colorPrimaries:(int)a1 atTime:(union { double x0; struct *x1; })a2;
- (BOOL)keyerActiveAt:(union { double x0; struct *x1; })a0;
- (void)removeKeyframeAtTime:(union { double x0; struct *x1; })a0;
- (void)removeKeyframeAtTime:(union { double x0; struct *x1; })a0 forParam:(int)a1 withAPI:(id)a2;
- (void)setAddTolerance:(BOOL)a0;
- (void)setDefineEdge:(BOOL)a0;
- (double)shadowsGain;
- (double)spreadGain;
- (void)syncChromaWithDB:(union { double x0; struct *x1; })a0;
- (void)syncWithDB:(union { double x0; struct *x1; })a0 setAsDefault:(BOOL)a1;
- (BOOL)tight;

@end
