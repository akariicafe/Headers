@class NSString;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSString *ownerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedRecordZoneIDWithName:(id)a0 ownerName:(id)a1;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (id)initWithCoder:(id)a0;
- (id)sqliteRepresentation;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)CKXPCSuitableString;
- (id)_initWithZoneName:(id)a0 ownerName:(id)a1;
- (id)CKPropertiesDescriptionWithProperties:(id)a0;
- (long long)compareToRecordZoneID:(id)a0;
- (BOOL)isDefaultRecordZoneID;
- (void)encodeWithCoder:(id)a0;

@end
