@class NSNumber, NSString;

@interface GKGameDescriptor : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSNumber *externalVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *shortBundleVersion;
@property (nonatomic) long long platform;

+ (BOOL)supportsSecureCoding;
+ (long long)currentPlatform;
+ (id)secureCodedPropertyKeys;
+ (id)currentPlatformServerString;
+ (long long)gamePlatformFromServerGameDescriptorString:(id)a0;
+ (long long)gamePlatformFromServerPushString:(id)a0;
+ (id)platformStringForServerRequest:(long long)a0;
+ (id)gameDescriptorWithBundleID:(id)a0 bundleVersion:(id)a1 shortBundleVersion:(id)a2 adamID:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithPushDictionary:(id)a0;
- (id)dictionaryForRequest;

@end
