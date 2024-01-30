@class NEIKEv2PacketTunnelProvider, NSString, NWInterface, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface NEIKEv2MOBIKE : NSObject <NSObject>

@property (weak) NEIKEv2PacketTunnelProvider *tunnelProvider;
@property (retain) NSObject<OS_dispatch_source> *mobikeWaitTimer;
@property (retain) NSObject<OS_dispatch_queue> *mobikeQueue;
@property (retain) NWInterface *mobikeInterface;
@property (retain) NWInterface *mobikeTransportInterface;
@property long long mobikePathStatus;
@property unsigned long long mobikeTries;
@property (retain) NSString *mobikeServer;
@property BOOL mobikeInProgress;
@property BOOL mobikePending;
@property BOOL mobikeReasserting;
@property BOOL mobikeEarlyDisconnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0 tunnelProvider:(id)a1;
- (void)initiateMOBIKE:(unsigned long long)a0 pathStatus:(long long)a1 serverAddress:(id)a2 earlyDisconnect:(BOOL)a3;
- (void).cxx_destruct;
- (void)mobikeStopWaitTimer;
- (void)mobikeReassert;
- (void)mobikeStartWaitTimer;
- (void)mobikeDisconnect;
- (BOOL)startMOBIKE:(id)a0;
- (BOOL)mobikeReadyCheck:(unsigned long long)a0 pathStatus:(long long)a1 mobikeServer:(id)a2;
- (void)dealloc;

@end
