@class NSString, NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface PowerUISmartChargeClient : NSObject <PowerUISmartChargeClientManaging>

@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (void)isOBCSupportedWithHandler:(id /* block */)a0;
- (void)isOBCEngagedAsDesktopDeviceWithHandler:(id /* block */)a0;
- (BOOL)isOBCSupported;
- (id)fullChargeDeadline:(id *)a0;
- (void)resetDevelopmentMode;
- (void).cxx_destruct;
- (void)enableSmartChargingWithHandler:(id /* block */)a0;
- (BOOL)isOBCEngaged:(BOOL *)a0 asDesktopDevice:(BOOL *)a1 chargingOverrideAllowed:(BOOL *)a2 withError:(id *)a3;
- (id)simulateCurrentOutputAsOfDate:(id)a0 overrideAllSignals:(BOOL)a1 withError:(id *)a2;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)a0;
- (BOOL)setState:(unsigned long long)a0 error:(id *)a1;
- (void)engageFrom:(id)a0 until:(id)a1 repeatUntil:(id)a2 overrideAllSignals:(BOOL)a3;
- (id)powerLogStatus;
- (void)resetEngagementOverride;
- (BOOL)temporarilyEnableCharging:(id *)a0;
- (void)disableSmartChargingWithHandler:(id /* block */)a0;
- (unsigned long long)isSmartChargingCurrentlyEnabled:(id *)a0;
- (BOOL)temporarilyDisableSmartCharging:(id *)a0;
- (void)isOBCEngagedWithHandler:(id /* block */)a0;
- (void)temporarilyEnableChargingWithHandler:(id /* block */)a0;
- (id)status;
- (void)temporarilyDisableSmartChargingWithHandler:(id /* block */)a0;
- (id)initWithClientName:(id)a0;
- (BOOL)enableSmartCharging:(id *)a0;
- (BOOL)disableSmartCharging:(id *)a0;
- (BOOL)isOBCEngaged:(id *)a0;
- (BOOL)isOBCEngagedAsDesktopDevice:(BOOL *)a0 chargingOverrideAllowed:(BOOL *)a1 withError:(id *)a2;
- (BOOL)setChargingStatus:(BOOL)a0;
- (void)fullChargeDeadlineWithHandler:(id /* block */)a0;
- (void)enterDevelopmentMode;

@end
