@class NSArray;

@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordIDsToGrant;
@property (retain, nonatomic) NSArray *recordIDsToRevoke;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
