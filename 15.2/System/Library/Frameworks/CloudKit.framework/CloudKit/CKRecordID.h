@class NSString, CKRecordZoneID;

@interface CKRecordID : NSObject <CKXPCSuitableString, CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidRecordName:(id)a0 outError:(id *)a1;

- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)initWithRecordName:(id)a0 zoneID:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)initWithRecordName:(id)a0;
- (void)_nilOutRecordName;
- (BOOL)isEqualIgnoringAnonymousUserIDsToRecordID:(id)a0;
- (long long)compareToRecordID:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)CKXPCSuitableString;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (id)redactedDescription;

@end
