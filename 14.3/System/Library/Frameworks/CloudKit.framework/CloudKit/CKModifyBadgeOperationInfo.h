@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long badgeValue;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
