@class NSMutableDictionary, NSDictionary, PFUbiquityKnowledgeVector, NSDate, NSNumber, NSString;

@interface PFUbiquityPeerSnapshot : NSObject

@property (readonly, nonatomic) NSDictionary *logSnapshot;
@property (readonly, nonatomic) NSMutableDictionary *diffFromPrevious;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;
@property (readonly, nonatomic) NSNumber *transactionNumber;
@property (readonly, nonatomic) NSDate *transactionDate;
@property (readonly, nonatomic) NSString *exportingPeerID;

- (void)dealloc;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTranasctionEntry:(id)a0 andLogSnapshot:(id)a1;
- (id)initWithExportingPeerID:(id)a0 logSnapshot:(id)a1 transactionNumber:(id)a2 transactionDate:(id)a3 andKnowledgeVector:(id)a4;
- (void)computeDiffToPreviousSnapshot:(id)a0;
- (void)removeValuesChangedByPeerSnapshot:(id)a0;

@end
