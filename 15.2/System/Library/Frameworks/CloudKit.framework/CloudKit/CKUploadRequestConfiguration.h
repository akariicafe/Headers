@class NSString, CKRecordZoneID;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverride;
@property (copy, nonatomic) CKRecordZoneID *repairZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationFromBaseContainer:(id)a0;
+ (id)resolvedConfigurationWithBaseContainer:(id)a0 overrides:(id)a1;

- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initFromBaseContainer:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
