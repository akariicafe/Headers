@class NSString, ASDAudioDeviceDSPDatabase, ASDAudioDeviceDSPConfiguration, ASDAudioDevice;

@interface ASDDSPAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    NSString *_resourcePath;
}

@property (retain, nonatomic) ASDAudioDeviceDSPConfiguration *currentDSPConfiguration;
@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly, nonatomic) ASDAudioDeviceDSPDatabase *dspDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dspItemsInConfiguration:(id)a0 notInConfiguration:(id)a1;

- (unsigned int)clockAlgorithm;
- (void)setDeviceName:(id)a0;
- (id /* block */)getZeroTimestampBlock;
- (int)stopIOForClient:(unsigned int)a0;
- (id)driverClassName;
- (BOOL)canBeDefaultDevice;
- (id)manufacturerName;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (BOOL)changeSamplingRate:(double)a0;
- (unsigned int)clockDomain;
- (BOOL)clockIsStable;
- (unsigned int)timestampPeriod;
- (unsigned int)outputLatency;
- (int)startIOForClient:(unsigned int)a0;
- (id)modelUID;
- (id)modelName;
- (unsigned int)inputLatency;
- (id)samplingRates;
- (void)addOutputStream:(id)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (id)deviceName;
- (void)setSamplingRate:(double)a0;
- (double)samplingRate;
- (unsigned int)transportType;
- (void)removeOutputStream:(id)a0;
- (id)findDSPConfigurationForCurrentState;
- (unsigned int)inputSafetyOffset;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (BOOL)isHidden;
- (BOOL)canBeDefaultOutputDevice;
- (id /* block */)willDoReadInputBlock;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;
- (BOOL)updateDeviceDSPConfiguration;
- (BOOL)canBeDefaultSystemDevice;
- (void)removeInputStream:(id)a0;
- (unsigned int)outputSafetyOffset;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (id /* block */)willDoWriteMixBlock;
- (BOOL)canBeDefaultInputDevice;
- (void)addInputStream:(id)a0;
- (void).cxx_destruct;

@end
