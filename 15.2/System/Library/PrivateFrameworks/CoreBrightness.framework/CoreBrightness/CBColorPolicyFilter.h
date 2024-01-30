@class CBCEModule, CBStack, CBHIDEvent;

@interface CBColorPolicyFilter : CBFilter {
    float _mitigationThrE[20];
    float _mitigationThrL[20];
    int _mitigationThrSize;
    float _ceMitigationThrE[20];
    float _ceMitigationThrL[20];
    int _ceMitigationThrSize;
    float[47] *_mitigatedStrengthLUT;
    CBCEModule *_ceModule;
    BOOL _ceEnabled;
    CBStack *_alsStack;
    unsigned long long _stackLength;
    unsigned long long _stackCurrentCount;
    unsigned long long _consecutiveNonMitgatedCount;
    BOOL _mitigationUsedYet;
}

@property BOOL isColorMitigationTriggered;
@property float filteredStrength;
@property (readonly, nonatomic) CBHIDEvent *filteredALS;

- (id)initWithID:(unsigned int)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)resetFilter;
- (id)filterEvent:(id)a0;
- (id)handleALSEvent:(id)a0;
- (void)dealloc;
- (void)setModuleObject:(id)a0;
- (void)initializeMitigationsForDevice:(unsigned int)a0;
- (BOOL)sampleIsFromMitigatedRegion:(id)a0;
- (float)computeBaselineStrengthForLux:(float)a0 andNits:(float)a1;
- (BOOL)sampleIsFromCERegion:(id)a0;
- (BOOL)shouldMitigateForSample:(id)a0 withLuxThr:(float *)a1 NitsThr:(float *)a2 andSize:(int)a3;
- (float)biLinearInterpBetweenIndices:(char *)a0 forPoint1:(float)a1 andPoint2:(float)a2;
- (float)interpolateBetweenX1:(float)a0 Y1:(float)a1 X2:(float)a2 Y2:(float)a3 X:(float)a4;

@end
