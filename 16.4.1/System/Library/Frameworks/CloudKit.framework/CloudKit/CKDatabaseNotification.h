@class CKRecordZoneID;

@interface CKDatabaseNotification : CKNotification <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long databaseScope;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRemoteNotificationDictionary:(id)a0;

@end
