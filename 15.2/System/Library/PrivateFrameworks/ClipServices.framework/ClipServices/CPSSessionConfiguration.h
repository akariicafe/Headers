@class NSUUID, NSString;

@interface CPSSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) CPSSessionConfiguration *standardConfiguration;
@property (class, readonly, nonatomic) CPSSessionConfiguration *localConfiguration;
@property (class, readonly, nonatomic) CPSSessionConfiguration *pptConfiguration;
@property (class, readonly, nonatomic) CPSSessionConfiguration *pptLocalConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) NSString *sourceBundleID;
@property (nonatomic) BOOL usedByPPT;
@property (nonatomic) BOOL useLocalContent;
@property (copy, nonatomic) NSString *fallbackClipBundleID;
@property (copy, nonatomic) NSString *referrerBundleID;
@property (readonly, nonatomic) BOOL canPrefetchEncryptionKey;
@property (readonly, nonatomic) BOOL mayLaunchWithoutInvocationUI;
@property (copy, nonatomic) NSString *launchReason;
@property (readonly, nonatomic) NSString *analyticsReferrerBundleID;
@property (readonly, nonatomic) NSString *analyticsLaunchReason;
@property (readonly, nonatomic) BOOL analyticsShouldIncludeReferrerURL;
@property (nonatomic) BOOL originIsControlCenter;
@property (nonatomic) BOOL isForSwitcherOverlay;

+ (id)standardConfigurationWithFallbackClipBundleID:(id)a0;
+ (id)reasonForSourceBundleID:(id)a0;
+ (id)_defaultSourceBundleIDToReasonMap;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
