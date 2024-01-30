@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long badgeValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
