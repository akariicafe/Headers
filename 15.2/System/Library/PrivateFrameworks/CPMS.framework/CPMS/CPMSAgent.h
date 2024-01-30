@class NSString, NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CPMSAgent : NSObject <CPMSAgentProtocol> {
    unsigned int _ppmService;
    struct IONotificationPort { } *_notificationPort;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSSet *_timeScalesSet;
}

@property (retain) NSMutableSet *clientSet;
@property unsigned int connect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCPMSSupported;
+ (BOOL)isCPMSSupportedForClient:(long long)a0;
+ (id)sharedCPMSAgent;
+ (unsigned char)CPMSClientIdToPPMClientId:(long long)a0;
+ (id)log;
+ (BOOL)isCPMSSupportedForAnyClient;

- (id)copyPowerBudgetForRequest:(id)a0 forClient:(long long)a1 error:(id *)a2;
- (BOOL)registerClientWithDescription:(id)a0 error:(id *)a1;
- (BOOL)acknowledgePowerBudget:(id)a0 forClientId:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)registerForNotifications;
- (void)dealloc;
- (BOOL)sanityCheckClientDescription:(id)a0;
- (char)CPMSPowerTimeScaleToPPMIndex:(id)a0;
- (BOOL)isClientIdValid:(long long)a0;
- (id)PPMIndexToCPMSPowerTimeScale:(char)a0;
- (id)requestPowerBudget:(id)a0 forClient:(long long)a1 error:(id *)a2;

@end
