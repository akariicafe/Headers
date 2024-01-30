@class NSString, PFUbiquityPeer, NSNumber, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerRange : NSManagedObject

@property (retain, nonatomic) NSNumber *peerStart;
@property (retain, nonatomic) NSNumber *end;
@property (retain, nonatomic) NSNumber *peerEnd;
@property (retain, nonatomic) NSString *peerEntityName;
@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) PFUbiquityPeer *peer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;

@end
