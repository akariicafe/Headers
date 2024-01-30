@class NSString, PFUbiquityPeer, NSNumber, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerState : NSManagedObject

@property (retain, nonatomic) NSString *lastProcessedTransactionLogURL;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) PFUbiquityPeer *peer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;

+ (id)peerStateForStoreName:(id)a0 andPeerID:(id)a1 inManagedObjectContext:(id)a2 createIfMissing:(BOOL)a3;
+ (id)peerStatesMatchingStoreName:(id)a0 inManagedObjectContext:(id)a1;
+ (id)peerStateForStoreName:(id)a0 andPeerID:(id)a1 inManagedObjectContext:(id)a2;
+ (id)peerStatesMatchingStoreName:(id)a0 inManagedObjectContext:(id)a1 omittingLocalPeerID:(id)a2;

- (id)initWithStoreName:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
