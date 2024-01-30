@interface CKDatabaseNotification : CKNotification <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long databaseScope;

- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
