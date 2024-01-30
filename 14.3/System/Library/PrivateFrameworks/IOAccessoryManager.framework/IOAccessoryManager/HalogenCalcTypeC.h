@class NSMutableData;

@interface HalogenCalcTypeC : NSObject

@property int nSamples;
@property int sizeofSample;
@property double sampleRate;
@property double signalFrequency;
@property double tiaGain;
@property double adcGain;
@property double parasiticCap;
@property double seriesResistance;
@property double seriesRCResistance;
@property double LDCMACCapacitance;
@property _Complex double seriesTotalImpedance;
@property NSMutableData *tmp1DataBuff;
@property int tmp1DataBuffSize;
@property NSMutableData *tmp2DataBuff;
@property int tmp2DataBuffSize;
@property NSMutableData *tmp3DataBuff;
@property int tmp3DataBuffSize;
@property struct OpaqueFFTSetupD { } *fftContext;
@property (readonly) double voltageGainCorrection;
@property (readonly) double currentGainCorrection;
@property (readonly) double currentPhaseCompensation;
@property (readonly) double measurementVoltageSignalLevel;
@property (readonly) double measurementVoltageNoiseLevel;
@property (readonly) double measurementVoltageSNR;
@property (readonly) double measurementCurrentSignalLevel;
@property (readonly) double measurementCurrentNoiseLevel;
@property (readonly) double measurementCurrentSNR;
@property (readonly) double measurementVoltageAmplitude;
@property (readonly) double measurementCurrentAmplitude;
@property (readonly) double measurementVoltagePhase;
@property (readonly) double measurementCurrentPhase;
@property (readonly) double goertzelImpedance;
@property (readonly) double goertzelPhase;
@property (readonly) double compensatedImpedance;
@property (readonly) double compensatedPhase;
@property (readonly) double loadImpedance;
@property (readonly) double loadPhase;
@property (readonly) double resistanceInOhms;
@property (readonly) double capacitanceInNanoF;

- (void)dealloc;
- (void)_freeBuffers;
- (BOOL)_allocBuffers;
- (id)initWithParams:(int)a0 signalFrequency:(double)a1 sampleRate:(unsigned long long)a2 tiaGain:(double)a3 adcGain:(double)a4 parasiticCap:(double)a5;
- (int)doCalibration:(id)a0 withCurrentData:(id)a1;
- (int)doLiquidDetection:(id)a0 withCurrentData:(id)a1 isReceptacleEmpty:(BOOL)a2 isReceptacleWet:(BOOL)a3 withWetTransitionThreshold:(double)a4 withDryTransitionThreshold:(double)a5;
- (void)_applyGain:(double)a0 toData:(id)a1;
- (void)_applyFractionalPhaseShift:(id)a0 withPhaseDelay:(double)a1;
- (void)_applyTiaGain:(id)a0 toCurrentData:(id)a1;
- (void)_rcSolver;
- (void)_applyHanningWindow:(id)a0 withSize:(int)a1;
- (void)_goertzelSecondOrder:(id)a0 hasFftValue:(double *)a1 hasPhase:(double *)a2 withHanning:(BOOL)a3 amplitudeCorrectionFactor:(double)a4;
- (double)_snr:(id)a0 withGain:(double)a1 hasSignalLevel:(double *)a2 hasNoiseLevel:(double *)a3;
- (void)_doMuxComp:(double)a0 withPhase:(double)a1;

@end
