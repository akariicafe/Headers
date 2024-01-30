@class NSString, CKContainer, NSDictionary, CKSchedulerActivity, CKAssetDownloadStagingManager, CKXPCActivity, NSNumber;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {
    BOOL _hasContainer;
    BOOL _hasAllowsCellularAccess;
    BOOL _hasLongLived;
    BOOL _hasTimeoutIntervalForRequest;
    BOOL _hasTimeoutIntervalForResource;
    BOOL _hasCKXPCActivity;
    BOOL _hasXPCActivityAutomaticallyDefer;
    BOOL _hasSchedulerActivity;
    BOOL _hasDiscretionarySchedulingForEntireOperation;
    BOOL _hasPreferAnonymousRequests;
    BOOL _hasSourceApplicationBundleIdentifier;
    BOOL _hasSourceApplicationSecondaryIdentifier;
    BOOL _hasApplicationBundleIdentifierOverrideForContainerAccess;
    BOOL _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
    BOOL _hasAdditionalRequestHTTPHeaders;
    BOOL _hasIsCloudKitSupportOperation;
    BOOL _hasCacheDeleteAvailableSpaceClass;
    BOOL _hasAssetDownloadStagingManager;
}

@property (class, readonly, copy, nonatomic) CKOperationConfiguration *defaultConvenienceOperationConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL hasQualityOfService;
@property BOOL hasAllowsExpensiveNetworkAccess;
@property BOOL hasAutomaticallyRetryNetworkFailures;
@property BOOL hasDiscretionaryNetworkBehavior;
@property (readonly, copy) NSDictionary *unitTestOverrides;
@property (copy, setter=setCKXPCActivity:) CKXPCActivity *ckXPCActivity;
@property BOOL xpcActivityAutomaticallyDefer;
@property BOOL discretionarySchedulingForEntireOperation;
@property (copy) NSString *_sourceApplicationSecondaryIdentifier;
@property BOOL allowsExpensiveNetworkAccess;
@property BOOL automaticallyRetryNetworkFailures;
@property (copy) CKSchedulerActivity *schedulerActivity;
@property unsigned long long discretionaryNetworkBehavior;
@property BOOL preferAnonymousRequests;
@property (copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (copy) NSString *sourceApplicationSecondaryIdentifier;
@property (copy) NSDictionary *additionalRequestHTTPHeaders;
@property BOOL isCloudKitSupportOperation;
@property (copy) NSNumber *cacheDeleteAvailableSpaceClass;
@property (copy) CKAssetDownloadStagingManager *assetDownloadStagingManager;
@property (retain) CKContainer *container;
@property long long qualityOfService;
@property BOOL allowsCellularAccess;
@property (getter=isLongLived) BOOL longLived;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)setApplicationBundleIdentifierOverride:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setXpcActivity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolveAgainstGenericConfiguration:(id)a0;
- (void)removeUnitTestOverride:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasXPCActivity;
- (id)init;
- (void)addUnitTestOverrides:(id)a0;
- (void)setXPCActivity:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
