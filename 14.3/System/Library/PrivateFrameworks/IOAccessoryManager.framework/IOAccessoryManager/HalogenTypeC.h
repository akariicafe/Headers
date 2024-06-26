@class HalogenCalcTypeC, NSString, NSCondition, NSMutableData, NSObject, HalogenAudio;
@protocol OS_dispatch_queue;

@interface HalogenTypeC : NSObject <HalogenAudioDelegate>

@property int nInputChannels;
@property int nOutputChannels;
@property int sampleRate;
@property int bitDepth;
@property int inputFrameSizeInBytes;
@property int outputFrameSizeInBytes;
@property struct OpaqueAudioComponentInstance { } *audioComponentInst;
@property HalogenAudio *halogenAudioUnit;
@property int warmupTimeInMs;
@property int AceSettlingTimeInMs;
@property int nMeasurementSamples;
@property int nWarmupSamples;
@property int nAceSettlingSamples;
@property int nTotalSamples;
@property int nPaddingSamples;
@property double signalFreq;
@property int initalPhaseInDegrees;
@property (readonly, nonatomic) unsigned short maxOutputAmplitude;
@property (readonly, nonatomic) unsigned short signalOffset;
@property NSMutableData *pcmInputData;
@property int pcmInputDataMaxSzInBytes;
@property int pcmInputDataIndexInBytes;
@property int pcmInputDataSampleCnt;
@property BOOL isCalibrationDone;
@property BOOL isMeasurementDone;
@property NSMutableData *pcmOutputData;
@property int pcmOutputDataMaxSzInBytes;
@property int pcmOutputDataIndexInBytes;
@property NSMutableData *currentData;
@property NSMutableData *voltageData;
@property int audioTimeoutInSec;
@property NSCondition *audioTimeoutCond;
@property int measurementSampleOffsetInFrames;
@property HalogenCalcTypeC *halogenCalcTypeC;
@property unsigned int service;
@property unsigned int connect;
@property (nonatomic) NSObject<OS_dispatch_queue> *systemPowerQueue;
@property (nonatomic) unsigned int systemPowerPort;
@property (nonatomic) struct IONotificationPort { } *systemPowerNotifyPortRef;
@property (nonatomic) unsigned int systemPowerIterator;
@property (nonatomic) int powerState;
@property NSCondition *powerStateCond;
@property (readonly) int precalibrationSampleOffsetInFrames;
@property (readonly) double precalVoltageSignalLevel;
@property (readonly) double precalVoltageNoiseLevel;
@property (readonly) double precalVoltageSNR;
@property (readonly) double precalCurrentSignalLevel;
@property (readonly) double precalCurrentNoiseLevel;
@property (readonly) double precalCurrentSNR;
@property (readonly) int calibrationSampleOffsetInFrames;
@property (readonly) double voltageGainCorrection;
@property (readonly) double currentGainCorrection;
@property (readonly) double currentPhaseCompensation;
@property (readonly) double calVoltageSignalLevel;
@property (readonly) double calVoltageNoiseLevel;
@property (readonly) double calVoltageSNR;
@property (readonly) double calCurrentSignalLevel;
@property (readonly) double calCurrentNoiseLevel;
@property (readonly) double calCurrentSNR;
@property (readonly) double goertzelImpedance;
@property (readonly) double goertzelPhase;
@property (readonly) double compensatedImpedance;
@property (readonly) double compensatedPhase;
@property (readonly) double resistanceInOhms;
@property (readonly) double capacitanceInNanoF;
@property (readonly) double clippingScore;
@property (readonly) double measurementVoltageSignalLevel;
@property (readonly) double measurementVoltageNoiseLevel;
@property (readonly) double measurementVoltageSNR;
@property (readonly) double measurementCurrentSignalLevel;
@property (readonly) double measurementCurrentNoiseLevel;
@property (readonly) double measurementCurrentSNR;
@property (readonly) double measurementCondetSNR;
@property (readonly) double measurementVoltageAmplitude;
@property (readonly) double measurementCurrentAmplitude;
@property (readonly) double measurementVoltagePhase;
@property (readonly) double measurementCurrentPhase;
@property (readonly) double measurementLoadImpedanceMagnitude;
@property (readonly) double measurementLoadImpedancePhase;
@property (readonly) int halogenResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_freeBuffers;
- (BOOL)_allocBuffers;
- (BOOL)_connectToAccessoryManager:(int)a0;
- (BOOL)_createSleepWakeNotifier;
- (void)_generateSineWave;
- (void)_destroySleepWakeNotifier;
- (void)_disconnectFromAccessoryManager;
- (BOOL)_doLDCMCalculation:(BOOL)a0 isReceptacleWet:(BOOL)a1 withWetTransitionThreshold:(double)a2 withDryTransitionThreshold:(double)a3;
- (void)_resetCalcValues;
- (BOOL)_writeCalResults:(id)a0;
- (int)recordCallBackFunc:(unsigned int *)a0 AudioTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a1 busNum:(unsigned int)a2 numFrames:(unsigned int)a3 AudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a4;
- (int)playbackCallBackFunc:(unsigned int *)a0 AudioTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a1 busNum:(unsigned int)a2 numFrames:(unsigned int)a3 AudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a4;
- (id)initWithParams:(int)a0 onPort:(int)a1;
- (int)saveAsWav:(id)a0;
- (int)doLDCMMeasurement:(int)a0 isCalibrationNeeded:(BOOL)a1 isReceptacleEmpty:(BOOL)a2 isReceptacleWet:(BOOL)a3 withWetTransitionThreshold:(double)a4 withDryTransitionThreshold:(double)a5;
- (BOOL)_readCalibrationParameters:(id)a0;

@end
