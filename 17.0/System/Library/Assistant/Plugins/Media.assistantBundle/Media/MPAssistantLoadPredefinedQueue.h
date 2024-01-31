@class NSString, MPCAssistantAvailability, ICUserIdentity;
@protocol AFServiceHelper;

@interface MPAssistantLoadPredefinedQueue : SAMPLoadPredefinedQueue <AFServiceCommand> {
    id<AFServiceHelper> _serviceHelper;
    MPCAssistantAvailability *_availability;
    NSString *_requestAceHash;
    ICUserIdentity *_userIdentity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_validate;
- (void)_performWithNowPlayingItem:(id)a0 audioRoutingInfo:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a1 completion:(id /* block */)a2;
- (id)_radioStations;
- (void)performWithCompletion:(id /* block */)a0 serviceHelper:(id)a1;

@end
