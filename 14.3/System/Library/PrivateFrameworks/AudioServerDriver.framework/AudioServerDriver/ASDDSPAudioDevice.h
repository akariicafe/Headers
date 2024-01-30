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
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)modelUID;
- (unsigned int)clockDomain;
- (BOOL)canBeDefaultDevice;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)canBeDefaultOutputDevice;
- (BOOL)canBeDefaultSystemDevice;
- (id)driverClassName;
- (unsigned int)timestampPeriod;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (int)startIOForClient:(unsigned int)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (unsigned int)clockAlgorithm;
- (BOOL)clockIsStable;
- (BOOL)changeSamplingRate:(double)a0;
- (id /* block */)getZeroTimestampBlock;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (void)addInputStream:(id)a0;
- (void)removeInputStream:(id)a0;
- (void)addOutputStream:(id)a0;
- (void)removeOutputStream:(id)a0;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (id)findDSPConfigurationForCurrentState;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (BOOL)updateDeviceDSPConfiguration;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;

@end
