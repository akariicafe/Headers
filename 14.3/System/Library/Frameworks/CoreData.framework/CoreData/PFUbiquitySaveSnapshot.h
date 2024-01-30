@class NSString, NSArray, NSMutableDictionary, NSDate;

@interface PFUbiquitySaveSnapshot : NSObject {
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
}

@property (retain, nonatomic) NSDate *transactionDate;
@property (readonly, nonatomic) NSString *modelVersionHash;
@property (readonly, nonatomic) NSString *exportingPeerID;
@property (readonly, nonatomic) NSArray *storeNames;
@property (readonly, nonatomic) NSString *localPeerID;

- (void)dealloc;
- (id)storeSaveSnapshotForStoreName:(id)a0;
- (id)initWithSaveNotification:(id)a0 withLocalPeerID:(id)a1;
- (id)storeSaveSnapshotForStore:(id)a0;
- (id)description;
- (id)initWithTransactionLog:(id)a0;

@end
