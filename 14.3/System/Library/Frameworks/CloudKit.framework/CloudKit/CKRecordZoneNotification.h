@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (nonatomic) long long databaseScope;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithRemoteNotificationDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
