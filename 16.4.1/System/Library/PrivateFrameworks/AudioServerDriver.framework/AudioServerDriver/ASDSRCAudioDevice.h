@class NSString, NSArray, NSObject, ASDAudioDevice;
@protocol OS_dispatch_queue;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    double _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    struct { unsigned char valid; double sampleTime; unsigned long long hostTime; unsigned long long seed; } _lastTimestamp;
}

@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)clockAlgorithm;
- (int)performStopIO;
- (void)setDeviceName:(id)a0;
- (id /* block */)getZeroTimestampBlock;
- (int)stopIOForClient:(unsigned int)a0;
- (void)setSamplingRates:(id)a0;
- (BOOL)canBeDefaultDevice;
- (id)manufacturerName;
- (BOOL)changeSamplingRate:(double)a0;
- (unsigned int)clockDomain;
- (BOOL)clockIsStable;
- (unsigned int)timestampPeriod;
- (int)startIOForClient:(unsigned int)a0;
- (id)modelUID;
- (id)modelName;
- (id)samplingRates;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (id)deviceName;
- (void)setSamplingRate:(double)a0;
- (double)sampleRateRatio;
- (double)samplingRate;
- (unsigned int)transportType;
- (unsigned int)inputSafetyOffset;
- (BOOL)isHidden;
- (BOOL)canBeDefaultOutputDevice;
- (id /* block */)willDoReadInputBlock;
- (BOOL)canBeDefaultSystemDevice;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (unsigned int)outputSafetyOffset;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (id /* block */)willDoWriteMixBlock;
- (BOOL)canBeDefaultInputDevice;
- (void).cxx_destruct;

@end
