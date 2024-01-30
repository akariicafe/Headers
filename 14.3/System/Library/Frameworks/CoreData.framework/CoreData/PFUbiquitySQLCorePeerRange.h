@class NSString, NSNumber;

@interface PFUbiquitySQLCorePeerRange : NSObject

@property (readonly, nonatomic) NSString *owningPeerID;
@property (readonly, nonatomic) NSString *entityName;
@property (readonly, nonatomic) NSNumber *rangeStart;
@property (readonly, nonatomic) NSNumber *rangeEnd;
@property (readonly, nonatomic) NSNumber *peerStart;
@property (readonly, nonatomic) NSNumber *peerEnd;

- (void)dealloc;
- (id)initWithOwningPeerID:(id)a0 entityName:(id)a1 rangeStart:(id)a2 rangeEnd:(id)a3 peerStart:(id)a4 peerEnd:(id)a5;
- (id)description;

@end
