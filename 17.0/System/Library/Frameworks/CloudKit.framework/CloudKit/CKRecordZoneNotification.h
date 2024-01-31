@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (nonatomic) long long databaseScope;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRemoteNotificationDictionary:(id)a0;

@end
