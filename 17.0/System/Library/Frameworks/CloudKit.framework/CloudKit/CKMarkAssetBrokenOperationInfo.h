@class CKUploadRequestConfiguration, CKRecordID, NSString;

@interface CKMarkAssetBrokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *field;
@property (nonatomic) long long listIndex;
@property (nonatomic) BOOL touchRepairZone;
@property (nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic) BOOL simulateCorruptAsset;
@property (nonatomic) BOOL writeRepairRecord;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
