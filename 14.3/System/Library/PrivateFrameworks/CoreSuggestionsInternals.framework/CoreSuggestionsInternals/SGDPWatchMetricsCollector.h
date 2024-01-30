@class SGQuickResponsesStore, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue, SGXPCActivityManagerProtocol;

@interface SGDPWatchMetricsCollector : NSObject <IDSServiceDelegate> {
    id<SGXPCActivityManagerProtocol> _xpcActivityManager;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_queue;
    SGQuickResponsesStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)sendEngagementToDPUsingData:(id)a0;
+ (id)recorderForKey:(id)a0;
+ (BOOL)recordResponse:(id)a0 numTimesToLog:(unsigned long long)a1 recorder:(id)a2 experimentID:(id)a3 treatmentID:(id)a4;
+ (id)getExperimentTreatmentTuple;
+ (id /* block */)onDeltaRowWithXPCActivityManager:(id)a0 activity:(id)a1 records:(id)a2;
+ (id /* block */)onCompletionWithXPCActivityManager:(id)a0 activity:(id)a1 records:(id)a2 experimentID:(id)a3 treatmentID:(id)a4 idsService:(id)a5 destinationDevice:(id)a6;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initAsDelegate;
- (id)initWithActivityManager:(id)a0;
- (id)initWithActivityManager:(id)a0 idsService:(id)a1 queue:(id)a2 store:(id)a3;
- (BOOL)syncQREngagementToDeviceWithActivity:(id)a0;

@end
