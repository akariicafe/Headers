@class NSMutableDictionary, NSDictionary, PFUbiquityKnowledgeVector, NSDate, NSNumber, NSString;

@interface PFUbiquityPeerSnapshot : NSObject {
    NSDictionary *_logSnapshot;
    NSMutableDictionary *_diffFromPrevious;
    PFUbiquityKnowledgeVector *_kv;
    NSNumber *_transactionNumber;
    NSDate *_transactionDate;
    NSString *_exportingPeerID;
}

- (long long)compare:(id)a0;
- (id)initWithTranasctionEntry:(id)a0 andLogSnapshot:(id)a1;
- (id)initWithExportingPeerID:(id)a0 logSnapshot:(id)a1 transactionNumber:(id)a2 transactionDate:(id)a3 andKnowledgeVector:(id)a4;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
