@class NSUUID, _DKSyncPeer;

@interface _DKSyncPeerInfo : NSObject {
    NSUUID *_uuid;
    _DKSyncPeer *_peer;
    long long _transports;
}

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;

@end
