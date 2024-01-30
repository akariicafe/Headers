@class CLFindMyAccessoryFragmentAccumulator, NSObject;
@protocol CLFindMyAccessoryManagerDelegate, OS_dispatch_queue;

@interface CLFindMyAccessoryManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__value_; } __ptr_; } _connection;
    CLFindMyAccessoryFragmentAccumulator *_accumulator;
}

@property (weak, nonatomic) id<CLFindMyAccessoryManagerDelegate> delegate;

+ (id)errorFromFragmentationStatus:(unsigned long long)a0;
+ (id)checkAvailabilityForPairedOwnerInformationControlPointMessages:(id)a0 messageName:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a1;

- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)handleInterruption;
- (void)connectDevice:(id)a0;
- (void)sendMessage:(const char *)a0;
- (void)scanForHELE;
- (void)initAccumulator;
- (void)fetchFirmwareVersionFromDevice:(id)a0;
- (void)fetchUserStatsWithPersistence:(BOOL)a0 fromDevice:(id)a1;
- (void)fetchHawkeyeAISProductData:(id)a0;
- (void)setObfuscatedIdentifier:(id)a0 onDevice:(id)a1;
- (void)stopPlayingUnauthorizedSoundOnDevice:(id)a0;
- (void)sendMessage:(const char *)a0 withPayload:(id)a1;
- (void)setWildConfiguration:(id)a0 onDevice:(id)a1;
- (void)stopPlayingSoundOnDevice:(id)a0;
- (void)fetchHawkeyeAISManufacturerName:(id)a0;
- (void)fetchTxPowerFromDevice:(id)a0 asOwner:(BOOL)a1;
- (void)fetchBatteryStatusForDevice:(id)a0;
- (void)setUnauthorizedPlaySoundRateLimit:(BOOL)a0 forDevice:(id)a1;
- (void)fetchHawkeyeAISModelColorCode:(id)a0;
- (void)fetchConnectionStateForDevice:(id)a0;
- (void)stopAggressiveAdvertisingOnDevice:(id)a0;
- (void)setHawkeyeTestMode:(int)a0 forDevice:(id)a1;
- (void)fetchHawkeyeAISModelName:(id)a0;
- (void)fetchHawkeyeAISAccessoryCategory:(id)a0;
- (void)fetchTxPower:(id)a0;
- (void)dumpLogDataOfType:(unsigned long long)a0 fromDevice:(id)a1;
- (void)unpairFromDevice:(id)a0;
- (void)setNearOwnerTimeout:(unsigned short)a0 onDevice:(id)a1;
- (void)induceCrashOnDevice:(id)a0;
- (void)unpairFromDeviceWithAddress:(id)a0;
- (void)startPlayingUnauthorizedSoundOnDevice:(id)a0;
- (void)setBatteryStatus:(unsigned long long)a0 forDevice:(id)a1;
- (void)setKeyRollInterval:(unsigned int)a0 onDevice:(id)a1;
- (void)scanForNearbyDevicesLong;
- (void)getMultiStatusFromDevice:(id)a0;
- (void)rollWildKeyOnDevice:(id)a0;
- (void)scanForNearbyOwner;
- (void)setDeviceType:(unsigned char)a0 onDevice:(id)a1;
- (void)fetchCurrentScanParameters;
- (void)startPlayingSoundSequence:(id)a0 onDevice:(id)a1;
- (void)startPlayingUnauthorizedSoundSequence:(id)a0 onDevice:(id)a1;
- (void)setAccelerometerSlopeModeConfiguration:(id)a0 forDevice:(id)a1;
- (void)fetchAccelerometerSlopeModeConfigurationForDevice:(id)a0;
- (void)startAggressiveAdvertisingOnDevice:(id)a0 withTimeout:(unsigned int)a1;
- (void)setAccelerometerOrientationModeConfiguration:(id)a0 forDevice:(id)a1;
- (void)fetchHawkeyeAISFindMyVersion:(id)a0;
- (void)fetchAccelerometerOrientationModeConfigurationForDevice:(id)a0;
- (void)fetchHawkeyeAISAccessoryCapabilities:(id)a0;
- (void)startUnauthorizedAggressiveAdvertisingOnDevice:(id)a0;
- (void)fetchHawkeyeAISBatteryType:(id)a0;
- (void)setHawkeyeUTMotionConfigWithSeparatedUTTimeoutSeconds:(unsigned int)a0 separatedUTBackoffTimeoutSeconds:(unsigned int)a1 forDevice:(id)a2;
- (void)fetchHawkeyeSerialNumber:(id)a0;
- (void)fetchHawkeyeCurrentPrimaryKey:(id)a0;
- (void)fetchHawkeyeiCloudIdentifier:(id)a0;
- (void)startMonitoringForAvengerAdvertisementsForBTFinding;
- (void)stopMonitoringForAvengerAdvertisementsForBTFinding;
- (void)disconnectDevice:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)dealloc;
- (id).cxx_construct;

@end
