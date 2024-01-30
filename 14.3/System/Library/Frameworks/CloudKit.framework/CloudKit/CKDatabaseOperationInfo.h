@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long databaseScope;

- (id)activityCreate;
- (void)takeValuesFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
