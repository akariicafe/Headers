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

- (id)modelName;
- (BOOL)changeSamplingRate:(double)a0;
- (void)setDeviceName:(id)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (id)deviceName;
- (BOOL)clockIsStable;
- (unsigned int)inputLatency;
- (id)manufacturerName;
- (unsigned int)inputSafetyOffset;
- (unsigned int)outputSafetyOffset;
- (int)startIOForClient:(unsigned int)a0;
- (unsigned int)timestampPeriod;
- (unsigned int)outputLatency;
- (id)samplingRates;
- (void).cxx_destruct;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id /* block */)getZeroTimestampBlock;
- (unsigned int)clockDomain;
- (double)samplingRate;
- (id)driverClassName;
- (id)modelUID;
- (BOOL)isHidden;
- (unsigned int)transportType;
- (void)setSamplingRate:(double)a0;
- (unsigned int)clockAlgorithm;
- (BOOL)canBeDefaultDevice;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)canBeDefaultOutputDevice;
- (BOOL)canBeDefaultSystemDevice;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
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
