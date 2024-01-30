@class NSString;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *anonymousCKUserID;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSString *ownerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedRecordZoneIDWithName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2 databaseScope:(long long)a3;

- (id)sqliteRepresentation;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)CKXPCSuitableString;
- (id)_initWithZoneName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2 databaseScope:(long long)a3;
- (long long)compareToRecordZoneID:(id)a0;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2 databaseScope:(long long)a3;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1 databaseScope:(long long)a2;
- (BOOL)isDefaultRecordZoneID;
- (BOOL)isSystemRecordZoneID;

@end
