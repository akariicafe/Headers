@class CKContainerID, NSString, CKRecordZoneID, CKQuery;

@interface BACloudKitDownload : BADownload <NSCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKContainerID *containerID;
@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) NSString *assetKey;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) long long databaseScope;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 recordType:(id)a1 expectedFieldKey:(id)a2 expectedFieldValue:(id)a3 assetKey:(id)a4 applicationGroupIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 recordType:(id)a1 expectedFieldKey:(id)a2 expectedFieldValue:(id)a3 assetKey:(id)a4 applicationGroupIdentifier:(id)a5 containerIdentifier:(id)a6 zoneID:(id)a7 databaseScope:(long long)a8 priority:(long long)a9;
- (id)initWithIdentifier:(id)a0 recordType:(id)a1 recordName:(id)a2 assetKey:(id)a3 applicationGroupIdentifier:(id)a4;

@end
