@class NSArray;

@interface CKDeclineSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *shareMetadatasToDecline;

- (void)encodeWithCoder:(id)a0;
- (long long)databaseScope;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
