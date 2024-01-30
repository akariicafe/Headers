@class NSString, CKRecordID, NSData;

@interface CKDWrappingContext : NSObject

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) NSData *fileSignature;
@property (retain, nonatomic) NSData *referenceSignature;

- (void).cxx_destruct;
- (id)initWithRecordID:(id)a0 fieldName:(id)a1 fileSignature:(id)a2 referenceSignature:(id)a3;
- (id)assetContextString;
- (id)encryptedDataContextString;

@end
