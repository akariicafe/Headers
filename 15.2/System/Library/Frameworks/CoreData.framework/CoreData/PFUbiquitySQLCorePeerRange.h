@class NSString, NSNumber;

@interface PFUbiquitySQLCorePeerRange : NSObject {
    NSString *_owningPeerID;
    NSString *_entityName;
    NSNumber *_rangeStart;
    NSNumber *_rangeEnd;
    NSNumber *_peerStart;
    NSNumber *_peerEnd;
}

- (id)description;
- (void)dealloc;
- (id)initWithOwningPeerID:(id)a0 entityName:(id)a1 rangeStart:(id)a2 rangeEnd:(id)a3 peerStart:(id)a4 peerEnd:(id)a5;

@end
