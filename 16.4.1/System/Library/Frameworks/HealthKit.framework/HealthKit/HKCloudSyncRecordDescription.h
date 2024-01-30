@class NSString, NSArray, NSDate, NSNumber, HKCloudSyncRecordIDDescription;

@interface HKCloudSyncRecordDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKCloudSyncRecordIDDescription *recordIDDescription;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSNumber *schemaVersion;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSString *detailedDescription;
@property (readonly, copy, nonatomic) NSArray *childRecordDescriptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithRecordIDDescription:(id)a0 recordType:(id)a1 schemaVersion:(id)a2 modificationDate:(id)a3 detailedDescription:(id)a4 childRecordDescriptions:(id)a5;

@end
