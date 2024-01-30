@class NSString, NSXPCConnection;
@protocol FudPlugin;

@interface AUServiceAdapter : NSObject <AUServiceProtocol, FudPluginDelegate>

@property (readonly, nonatomic) id<FudPlugin> updater;
@property (nonatomic) NSXPCConnection *activeConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)progress:(double)a0;
- (void)finishWithOptions:(id)a0;
- (void)accessoryDisconnected:(id)a0;
- (BOOL)hasActiveConnection;
- (void)findFirmwareWithOptions:(id)a0 remote:(BOOL)a1;
- (void)applyFirmwareWithOptions:(id)a0;
- (void)bootstrapWithOptions:(id)a0;
- (void)deviceClassAttached:(id)a0 options:(id)a1 withReply:(id /* block */)a2;
- (void)didApply:(BOOL)a0 info:(id)a1 error:(id)a2;
- (void)didBootstrap:(BOOL)a0 info:(id)a1 error:(id)a2;
- (void)didDownload:(BOOL)a0 info:(id)a1 error:(id)a2;
- (void)didFind:(BOOL)a0 info:(id)a1 updateAvailable:(BOOL)a2 needsDownload:(BOOL)a3 error:(id)a4;
- (void)didFinish:(BOOL)a0 info:(id)a1 error:(id)a2;
- (void)didPrepare:(BOOL)a0 info:(id)a1 error:(id)a2;
- (void)downloadFirmwareWithOptions:(id)a0;
- (void)issueNotification:(id)a0;
- (void)log:(int)a0 format:(id)a1;
- (void)logv:(int)a0 format:(id)a1 arguments:(char *)a2;
- (void)personalizationRequest:(id)a0;
- (void)personalizationResponse:(id)a0 response:(id)a1 status:(id)a2;
- (void)prepareFirmwareWithOptions:(id)a0;
- (void)queryDeviceList:(id /* block */)a0;
- (void)reportAnalytics:(id)a0 info:(id)a1;

@end
