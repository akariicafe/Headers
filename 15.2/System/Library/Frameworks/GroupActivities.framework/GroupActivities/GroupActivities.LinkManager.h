@interface GroupActivities.LinkManager : NSObject <CPConnectionProviding, CPLinkDelegate, CPParticipantDelegate> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ broadcastLink;
    void /* unknown type, empty encoding */ participantToControllerMap;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ topic;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ groupUUID;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ hasConnectedOnce;
    void /* unknown type, empty encoding */ receivedDataHandler;
    void /* unknown type, empty encoding */ onFirstConnectedHandler;
}

- (void)didFailWithError:(id)a0;
- (void)requestConnectionObjectForRemoteParticipantSync:(id)a0 linkType:(unsigned char)a1 completion:(id /* block */)a2;
- (void)didReceiveData:(id)a0 from:(id)a1;
- (void)didBecomeReady:(id)a0;
- (void)participant:(id)a0 didBecomeAvailable:(BOOL)a1;
- (void)didReceiveData:(id)a0 ofType:(unsigned char)a1 from:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
