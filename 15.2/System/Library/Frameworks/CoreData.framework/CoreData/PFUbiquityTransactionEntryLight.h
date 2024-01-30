@class PFUbiquityGlobalObjectID, NSString, PFUbiquityLocation, NSDate, NSNumber, PFUbiquityKnowledgeVector;

@interface PFUbiquityTransactionEntryLight : NSObject {
    PFUbiquityGlobalObjectID *_globalID;
    int _transactionType;
    NSString *_actingPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityKnowledgeVector *_kv;
}

@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSDate *transactionDate;

- (id)initWithTransactionEntry:(id)a0 ubiquityRootLocation:(id)a1 andGlobalIDCache:(id)a2;
- (id)description;
- (id)init;
- (void)dealloc;

@end
