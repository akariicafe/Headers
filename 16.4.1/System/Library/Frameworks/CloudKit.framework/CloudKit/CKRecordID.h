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
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)size;
- (void).cxx_destruct;
- (id)initWithRecordName:(id)a0 zoneID:(id)a1;
- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)CKXPCSuitableString;
- (void)_nilOutRecordName;
- (long long)compareToRecordID:(id)a0;
- (id)initWithRecordName:(id)a0;
- (BOOL)isEqualIgnoringAnonymousUserIDsToRecordID:(id)a0;

@end
