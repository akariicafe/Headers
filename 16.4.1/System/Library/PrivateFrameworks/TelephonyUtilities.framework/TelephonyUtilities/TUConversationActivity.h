@class TUConversationActivityMetadata, NSString, NSUUID, NSData, TUHandle, NSDate, TUConversationActivityContext;

@interface TUConversationActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *activityIdentifier;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) TUConversationActivityMetadata *metadata;
@property (copy, nonatomic) NSData *applicationContext;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, getter=isSupported) BOOL supported;
@property (copy, nonatomic) TUHandle *originator;
@property (copy, nonatomic) TUHandle *trustedFromHandle;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *fallbackApplicationName;
@property (nonatomic, getter=isSystemActivity) BOOL systemActivity;
@property (nonatomic, getter=isStaticActivity) BOOL staticActivity;
@property (nonatomic) BOOL startWhenStaged;
@property (readonly, copy, nonatomic) NSString *representativeBundleIdentifier;
@property (readonly, copy, nonatomic) TUConversationActivityContext *activityContext;
@property (readonly, nonatomic, getter=isEligibleForHandoff) BOOL eligibleForHandoff;
@property (readonly, nonatomic, getter=isEligibleForWebBrowser) BOOL eligibleForWebBrowser;
@property (readonly, nonatomic, getter=isPlaceholderActivity) BOOL placeholderActivity;

+ (id)lookupApplicationNameForBundleIdentifier:(id)a0;
+ (id)placeholderActivity;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)sanitizedCopy;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)localizedApplicationName;
- (id)concatenatedMetadataDescription;
- (BOOL)isScreenSharingActivity;
- (id)concatenatedDescription;
- (id)initWithBundleIdentifier:(id)a0 metadata:(id)a1 applicationContext:(id)a2 uuid:(id)a3 activityIdentifier:(id)a4;
- (id)initWithBundleIdentifier:(id)a0 metadata:(id)a1 applicationContext:(id)a2 uuid:(id)a3 activityIdentifier:(id)a4 fallbackApplicationName:(id)a5;
- (id)initWithCreationRequest:(id)a0 bundleIdentifier:(id)a1 systemActivity:(BOOL)a2;
- (id)initWithMetadata:(id)a0 applicationContext:(id)a1 uuid:(id)a2 activityIdentifier:(id)a3;
- (BOOL)isEqualToConversationActivity:(id)a0;
- (BOOL)isEquivalentToActivity:(id)a0;
- (id)platformScreenSharingBundleIdentifier;
- (id)representativeDisplayName;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)setActivityContext:(id)a0;

@end
