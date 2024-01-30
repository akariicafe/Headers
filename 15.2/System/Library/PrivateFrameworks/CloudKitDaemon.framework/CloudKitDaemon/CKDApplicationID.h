@class NSString;

@interface CKDApplicationID : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)sqliteRepresentation;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithApplicationBundleIdentifier:(id)a0 applicationBundleIdentifierOverrideForContainerAccess:(id)a1 applicationBundleIdentifierOverrideForNetworkAttribution:(id)a2 applicationBundleIdentifierOverrideForPushTopicGeneration:(id)a3 applicationBundleIdentifierOverrideForTCC:(id)a4;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
