@class PFUbiquityStoreMetadata, NSString, NSURL, NSDate, NSNumber, PFUbiquityPeer;

@interface PFUbiquityTransactionEntry : NSManagedObject

@property int transactionType;
@property (readonly) NSURL *transactionLogURL;
@property (retain, nonatomic) NSNumber *transactionTypeNum;
@property (retain, nonatomic) NSString *localIDStr;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSString *globalIDStr;
@property (retain, nonatomic) NSDate *transactionDate;
@property (retain, nonatomic) NSString *transactionLogFilename;
@property (retain, nonatomic) NSString *knowledgeVectorString;
@property (retain, nonatomic) PFUbiquityPeer *actingPeer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;

+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)a0 withTransactionType:(int)a1 importContext:(id)a2;
+ (id)createTransactionEntriesForCompressedObjectIDs:(id)a0 withTransactionType:(int)a1 withImportContext:(id)a2;
+ (id)transactionEntriesMatchingGlobalObjectID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)transactionEntriesMatchingLocalObjectID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)transactionEntriesAfterPeerState:(id)a0 forStoreName:(id)a1 inManagedObjectContext:(id)a2;
+ (id)deleteTransactionEntriesAfterPeerState:(id)a0 forStoreName:(id)a1 inManagedObjectContext:(id)a2;
+ (id)transactionEntriesForPeerID:(id)a0 withTransactionNumber:(id)a1 inManagedObjectContext:(id)a2;
+ (id)transactionEntriesForPeerID:(id)a0 beforeTransacationNumber:(id)a1 forStoreNamed:(id)a2 inManagedObjectContext:(id)a3;
+ (id)transactionEntryForGlobalIDString:(id)a0 withActingPeerID:(id)a1 atTransactionNumber:(id)a2 inManagedObjectContext:(id)a3;

- (id)initAndInsertIntoManagedObjectContext:(id)a0;

@end
