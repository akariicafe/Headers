@class NSString, CKRecordZoneID, CKRoughlyEquivalentProperties;

@interface CKRecordID : NSObject <CKXPCSuitableString, CKPropertiesDescription, CKRoughlyEquivalent, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;
+ (BOOL)isValidRecordName:(id)a0 outError:(id *)a1;

- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;
- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)sqliteRepresentation;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)size;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordName:(id)a0 zoneID:(id)a1;
- (id)CKXPCSuitableString;
- (void)_nilOutRecordName;
- (long long)compareToRecordID:(id)a0;
- (id)copyWithAnonymousCKUserID:(id)a0;
- (id)initWithRecordName:(id)a0;
- (BOOL)isEqualIgnoringAnonymousUserIDsToRecordID:(id)a0;

@end
