@class NSString, NSArray;

@interface HKCloudSyncDatabaseDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *scope;
@property (readonly, copy, nonatomic) NSArray *zoneDescriptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithScope:(id)a0 zoneDescriptions:(id)a1;

@end
