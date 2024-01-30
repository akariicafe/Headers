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
@property (readonly, nonatomic) NSIndexSet *scanAllowlist;
@property (readonly, nonatomic) NSIndexSet *advAllowlist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)cbStateAsString:(long long)a0;
+ (id)advAllowlist;
+ (id)scanAllowlist;
+ (id)wpStateAsString:(long long)a0;
+ (void)initializeAdvDenylist:(id)a0 AdvAllowlist:(id)a1 ScanDenylist:(id)a2 ScanAllowlist:(id)a3;
+ (BOOL)isInternalBuild;

- (void)updateState:(long long)a0 Restricted:(BOOL)a1;
- (void)generateStateDump;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)cleanup;
- (void)cbManagerDidUpdateState:(id)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (id)generateStateDumpStrings;
- (BOOL)isScanAllowlistedForType:(unsigned char)a0;
- (void)scalablePipeManagerDidUpdateState:(id)a0;
- (void)update;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 Name:(id)a1;
- (BOOL)isAdvertisingAllowlistedForType:(unsigned char)a0;
- (void)dealloc;

@end
