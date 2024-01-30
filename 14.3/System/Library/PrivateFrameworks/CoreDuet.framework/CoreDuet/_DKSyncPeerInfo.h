@class NSUUID, _DKSyncPeer;

@interface _DKSyncPeerInfo : NSObject {
    NSUUID *_uuid;
    _DKSyncPeer *_peer;
    long long _transports;
}

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;

@end
