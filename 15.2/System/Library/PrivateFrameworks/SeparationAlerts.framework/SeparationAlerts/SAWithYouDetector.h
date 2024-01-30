@class NSUUID, NSHashTable, NSDate, SADeviceRecord;
@protocol SABluetoothScanRequestProtocol, SATimeServiceProtocol, SALocationRequestProtocol;

@interface SAWithYouDetector : NSObject <SAWithYouDetectorServiceProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol>

@property (retain, nonatomic) id<SATimeServiceProtocol> clock;
@property (weak, nonatomic) id<SABluetoothScanRequestProtocol> bluetoothScanner;
@property (weak, nonatomic) id<SALocationRequestProtocol> locationRequester;
@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) SADeviceRecord *deviceRecord;
@property (nonatomic) BOOL requestedScan;
@property (nonatomic) BOOL requestedShortScan;
@property (retain, nonatomic) NSDate *lastStartOfScan;
@property (retain, nonatomic) NSDate *lastEndOfScan;
@property (nonatomic) BOOL isNotifyWhileTravelingEnabled;
@property (nonatomic) BOOL isPeriodicScansNeeded;
@property (nonatomic) BOOL isInVehicularTravel;
@property (retain, nonatomic) NSDate *nextOpportunisticScanDate;
@property (retain, nonatomic) NSUUID *nextScheduledAlarm;
@property (retain, nonatomic) NSDate *previousBufferEmptyTime;
@property (retain, nonatomic) NSDate *initializationTime;

+ (id)convertSAWithYouStatusToString:(unsigned long long)a0;

- (void)_notifyAllClientsOfWithYouStatusUpdate:(unsigned long long)a0 forDeviceWithUUID:(id)a1;
- (void)removeClient:(id)a0;
- (void)ingestTAEvent:(id)a0;
- (void)requestScanIfNeeded;
- (void)_updateWithYouStatusOnAdvBufferEmptyEvent:(id)a0;
- (void)pausePeriodicScan;
- (void)_updateAllWithYouStatusOnScanEndedEvent:(id)a0;
- (BOOL)_isRecentEnoughAdvertisement:(id)a0 forCurrentDate:(id)a1;
- (BOOL)isPeriodicScansAllowed;
- (BOOL)_isStatusBitSetForRelatedDeviceWithShiftIndex:(unsigned long long)a0 fromAdvertisement:(id)a1;
- (void)_updateWithYouStatusOfRelatedDevices:(id)a0;
- (void)forceUpdateWithYouStatus;
- (void)resumePeriodicScan;
- (unsigned long long)statusForDeviceWithUUID:(id)a0;
- (void)didChangeTravelTypeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)_finalizeToBeVerifiedStatus:(unsigned long long)a0;
- (BOOL)_isValidPartID:(long long)a0;
- (void)_updateWithYouStatusIfNecessaryOnConnectionEvent:(id)a0;
- (void)addClient:(id)a0;
- (void)forceUpdateWithYouStatusWithShortScan;
- (double)_maxAgeOfWithYouAdvertisementForDeviceType:(unsigned long long)a0;
- (BOOL)_isOnlyMonitoringLeashOnlyDevices;
- (void)_scheduleNextAlarmForScanAfterDate:(id)a0;
- (void)_updateWithYouStatusIfNecessaryOnAdvertisement:(id)a0;
- (void)resetAllWithYouStatusAndScanStates;
- (void)alarmFiredForUUID:(id)a0;
- (BOOL)_enoughTimeHasPassedSinceInitializationToMarkNotWithYouForDeviceType:(unsigned long long)a0;
- (BOOL)_deviceIsWatch:(id)a0;
- (id)initWithBluetoothScanner:(id)a0 locationRequester:(id)a1 deviceRecord:(id)a2 clock:(id)a3;

@end
