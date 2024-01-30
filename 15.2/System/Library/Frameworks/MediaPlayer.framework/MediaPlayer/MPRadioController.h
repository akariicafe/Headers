@class NSString, NSXPCConnection, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface MPRadioController : NSObject <MPClientRadioController> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    BOOL _hasLaunchedService;
    BOOL _isRadioAvailable;
    BKSProcessAssertion *_remoteProcessAssertion;
    id /* block */ _remoteProcessAssertionCompletionHandler;
    long long _remoteProcessAssertionCount;
}

@property (readonly, nonatomic, getter=isRadioAvailable) BOOL radioAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_endRemoteProcessAssertion;
- (void)clientRadioControllerRadioAvailabilityDidChange:(BOOL)a0;
- (void)clientRadioControllerRecentStationsDidChange;
- (void)getRecentStationGroupsWithCompletionHandler:(id /* block */)a0;
- (void)_beginRemoteProcessAssertionWithCompletionHandler:(id /* block */)a0;
- (void)_setRadioAvailable:(BOOL)a0;
- (void)_getConnectionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
