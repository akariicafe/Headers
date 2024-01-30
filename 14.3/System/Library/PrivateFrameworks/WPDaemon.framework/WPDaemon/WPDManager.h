@class WPDaemonServer, NSString, NSSet, NSIndexSet;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate>

@property (nonatomic) long long state;
@property (weak) WPDaemonServer *server;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isHomePod;
@property (nonatomic) BOOL restricted;
@property (nonatomic) BOOL testMode;
@property (retain, nonatomic) NSSet *cbManagers;
@property (readonly, nonatomic) BOOL isInternalBuild;
@property (readonly, nonatomic) NSIndexSet *scanWhiteList;
@property (readonly, nonatomic) NSIndexSet *advWhiteList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInternalBuild;
+ (void)initialize;
+ (id)scanWhiteList;
+ (id)advWhiteList;
+ (id)wpStateAsString:(long long)a0;
+ (id)cbStateAsString:(long long)a0;
+ (void)initializeAdvBlackList:(id)a0 AdvWhiteList:(id)a1 ScanBlackList:(id)a2 ScanWhiteList:(id)a3;

- (void)centralManagerDidUpdateState:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)cbManagerDidUpdateState:(id)a0;
- (void)dealloc;
- (id)generateStateDump;
- (void)update;
- (void)scalablePipeManagerDidUpdateState:(id)a0;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (id)initWithServer:(id)a0 Name:(id)a1;
- (void)updateState:(long long)a0 Restricted:(BOOL)a1;
- (BOOL)isScanWhitelistedForType:(unsigned char)a0;
- (BOOL)isAdvertisingWhitelistedForType:(unsigned char)a0;

@end
