@class NSString, CKRecordID, NSData, CKMergeableDeltaID;

@interface CKDWrappingContext : NSObject

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) CKMergeableDeltaID *mergeableDeltaID;
@property (retain, nonatomic) NSData *fileSignature;
@property (retain, nonatomic) NSData *referenceSignature;

- (id)assetContextString;
- (id)encryptedDataContextString;
- (id)initWithRecordID:(id)a0 fieldName:(id)a1 mergeableDeltaID:(id)a2 fileSignature:(id)a3 referenceSignature:(id)a4;
- (void).cxx_destruct;

@end
