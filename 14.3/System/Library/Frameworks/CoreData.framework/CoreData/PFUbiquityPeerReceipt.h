@class PFUbiquityKnowledgeVector, PFUbiquityLocation, NSDate;

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile

@property (readonly, nonatomic) PFUbiquityLocation *receiptFileLocation;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector *kv;
@property (retain, nonatomic) NSDate *writeDate;

- (id)initWithLocalPeerID:(id)a0 andKnowledgeVector:(id)a1 forPeerID:(id)a2 storeName:(id)a3 modelVersionHash:(id)a4 andUbiquityRootLocation:(id)a5;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithLocalPeerID:(id)a0 andReceiptFileLocation:(id)a1;
- (BOOL)loadFileFromLocation:(id)a0 error:(id *)a1;
- (BOOL)writeFileToLocation:(id)a0 error:(id *)a1;
- (id)initWithLocalPeerID:(id)a0 receiptPeerID:(id)a1 storeName:(id)a2 modelVersionHash:(id)a3 andUbiquityRootLocation:(id)a4;

@end
