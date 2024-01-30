@class NSString, PFUbiquityPeer, NSDate, NSNumber, PFUbiquityStoreMetadata;

@interface PFUbiquityTransactionEntry : NSManagedObject

@property (retain, nonatomic) NSNumber *transactionTypeNum;
@property (retain, nonatomic) NSString *localIDStr;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSString *globalIDStr;
@property (retain, nonatomic) NSDate *transactionDate;
@property (retain, nonatomic) NSString *transactionLogFilename;
@property (retain, nonatomic) NSString *knowledgeVectorString;
@property (retain, nonatomic) PFUbiquityPeer *actingPeer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;

- (id)initAndInsertIntoManagedObjectContext:(id)a0;

@end
