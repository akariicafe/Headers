@class NSString, CKRecordZoneID;

@interface CKRecordID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recordName;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidRecordName:(id)a0 outError:(id *)a1;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRecordName:(id)a0 zoneID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (id)initWithCoder:(id)a0;
- (id)sqliteRepresentation;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)CKXPCSuitableString;
- (long long)compareToRecordID:(id)a0;
- (id)CKPropertiesDescriptionWithProperties:(id)a0;
- (id)initWithRecordName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
