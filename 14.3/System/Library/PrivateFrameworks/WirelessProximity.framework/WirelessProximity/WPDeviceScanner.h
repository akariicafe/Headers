@class NSMutableArray, NSMutableDictionary;
@protocol WPDeviceScannerDelegate;

@interface WPDeviceScanner : WPClient

@property (weak, nonatomic) id<WPDeviceScannerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *liveDevices;
@property (retain, nonatomic) NSMutableDictionary *activeScans;
@property (nonatomic) BOOL anyScanResultsRequested;

- (void)anyDiscoveredDevice:(id)a0;
- (void)registerForAnyScanResults:(BOOL)a0;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)deviceDiscovered:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)postDevice:(id)a0;
- (void)postDevices:(id)a0;
- (void)addPuckType:(id)a0 toDictionary:(id)a1;
- (id)description;
- (void)parseCompanyData:(char *)a0 forSize:(int)a1 intoDictionary:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)unregisterAllDeviceChanges;
- (void)timerFinished:(id)a0;
- (BOOL)parseType:(unsigned char)a0 atOffset:(char *)a1 withSize:(int)a2 intoDictionary:(id)a3;
- (void)parseAirPrint:(char *)a0 forSize:(int)a1 intoDictionary:(id)a2;
- (void)unregisterForDevices:(id)a0;
- (void)registerForDevicesMatching:(id)a0 options:(id)a1;
- (void)invalidate;

@end
