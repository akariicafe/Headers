@class CKContainer, NSString, NSMutableDictionary, NSDictionary, CKSchedulerActivity, NSObject, NSNumber;
@protocol OS_xpc_object;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {
    BOOL _hasContainer;
    BOOL _hasAllowsCellularAccess;
    BOOL _hasLongLived;
    BOOL _hasTimeoutIntervalForRequest;
    BOOL _hasTimeoutIntervalForResource;
    BOOL _hasXPCActivity;
    BOOL _hasXPCActivityAutomaticallyDefer;
    BOOL _hasSchedulerActivity;
    BOOL _hasDiscretionarySchedulingForEntireOperation;
    BOOL _hasPreferAnonymousRequests;
    BOOL _hasAllowsBackgroundNetworking;
    BOOL _hasSourceApplicationBundleIdentifier;
    BOOL _hasSourceApplicationSecondaryIdentifier;
    BOOL _hasApplicationBundleIdentifierOverrideForContainerAccess;
    BOOL _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
    BOOL _hasAdditionalRequestHTTPHeaders;
    BOOL _hasIsCloudKitSupportOperation;
    BOOL _hasCacheDeleteAvailableSpaceClass;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasQualityOfService;
@property (nonatomic) BOOL hasAllowsExpensiveNetworkAccess;
@property (nonatomic) BOOL hasAutomaticallyRetryNetworkFailures;
@property (nonatomic) BOOL hasDiscretionaryNetworkBehavior;
@property (retain, nonatomic) NSMutableDictionary *unitTestOverrides;
@property (nonatomic) BOOL xpcActivityAutomaticallyDefer;
@property (nonatomic) BOOL discretionarySchedulingForEntireOperation;
@property (copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier;
@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) BOOL automaticallyRetryNetworkFailures;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;
@property (copy, nonatomic) CKSchedulerActivity *schedulerActivity;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) BOOL preferAnonymousRequests;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) BOOL isCloudKitSupportOperation;
@property (copy, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (nonatomic) BOOL allowsBackgroundNetworking;
@property (retain, nonatomic) CKContainer *container;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic, getter=isLongLived) BOOL longLived;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)setApplicationBundleIdentifierOverride:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolveAgainstGenericConfiguration:(id)a0;

@end
