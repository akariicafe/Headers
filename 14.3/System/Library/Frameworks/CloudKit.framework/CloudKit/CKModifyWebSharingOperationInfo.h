@class NSArray;

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordIDsToShare;
@property (retain, nonatomic) NSArray *recordIDsToUnshare;
@property (retain, nonatomic) NSArray *recordIDsToShareReadWrite;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
