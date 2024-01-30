@class NSString, BSSettings, FBSSceneSnapshotRequestHandle, NSMutableArray;

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate> {
    NSMutableArray *_requests;
    FBSSceneSnapshotRequestHandle *_outgoingRequestHandle;
    int _expired;
}

@property (copy, nonatomic) id /* block */ requestHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) double expirationInterval;
@property (copy, nonatomic) BSSettings *clientExtendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)fallbackXPCEncodableClass;
- (void)setExpired:(BOOL)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)_executeNextRequest;
- (void).cxx_destruct;
- (BOOL)snapshotRequest:(id)a0 performWithContext:(id)a1;
- (double)expirationInterval;
- (void)_finishAllRequests;
- (id)initWithRequests:(id)a0 expirationInterval:(double)a1 responseHandler:(id /* block */)a2;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)snapshotRequestAllowSnapshot:(id)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (BOOL)_remainsActionable;
- (void)executeRequestsWithHandler:(id /* block */)a0 completionHandler:(id /* block */)a1 expirationHandler:(id /* block */)a2;

@end
