@class NSString;

@interface HKCloudSyncRecordZoneIDDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSString *ownerName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
