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

- (id)deviceName;
- (void).cxx_destruct;
- (unsigned int)transportType;
- (void)setDeviceName:(id)a0;
- (id)manufacturerName;
- (double)samplingRate;
- (unsigned int)inputLatency;
- (unsigned int)outputLatency;
- (unsigned int)inputSafetyOffset;
- (unsigned int)outputSafetyOffset;
- (void)setSamplingRate:(double)a0;
- (id)modelName;
- (BOOL)isHidden;
- (id)samplingRates;
- (id)modelUID;
- (unsigned int)clockDomain;
- (BOOL)canBeDefaultDevice;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)canBeDefaultOutputDevice;
- (BOOL)canBeDefaultSystemDevice;
- (unsigned int)timestampPeriod;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (int)startIOForClient:(unsigned int)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (unsigned int)clockAlgorithm;
- (BOOL)clockIsStable;
- (BOOL)changeSamplingRate:(double)a0;
- (int)performStopIO;
- (id /* block */)getZeroTimestampBlock;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (void)setSamplingRates:(id)a0;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;

@end
