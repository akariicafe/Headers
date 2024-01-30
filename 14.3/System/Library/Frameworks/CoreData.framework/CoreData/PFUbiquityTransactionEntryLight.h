@class NSString, PFUbiquityGlobalObjectID, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSNumber, NSDate;

@interface PFUbiquityTransactionEntryLight : NSObject

@property (retain, nonatomic) PFUbiquityGlobalObjectID *globalID;
@property (nonatomic) int transactionType;
@property (retain, nonatomic) NSString *actingPeerID;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) PFUbiquityLocation *transactionLogLocation;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;
@property (retain, nonatomic) NSDate *transactionDate;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithTransactionEntry:(id)a0 ubiquityRootLocation:(id)a1 andGlobalIDCache:(id)a2;

@end
