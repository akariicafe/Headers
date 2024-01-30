@class CKContainer, NSString, NSMutableDictionary, NSDictionary, CKSchedulerActivity, NSObject, NSNumber;
@protocol OS_xpc_object;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasQualityOfService;
@property (nonatomic) BOOL hasContainer;
@property (nonatomic) BOOL hasAllowsCellularAccess;
@property (nonatomic) BOOL hasLongLived;
@property (nonatomic) BOOL hasTimeoutIntervalForRequest;
@property (nonatomic) BOOL hasTimeoutIntervalForResource;
@property (nonatomic) BOOL hasAutomaticallyRetryNetworkFailures;
@property (nonatomic) BOOL hasDiscretionaryNetworkBehavior;
@property (nonatomic) BOOL hasXPCActivity;
@property (nonatomic) BOOL hasXPCActivityAutomaticallyDefer;
@property (nonatomic) BOOL hasSchedulerActivity;
@property (nonatomic) BOOL hasDiscretionarySchedulingForEntireOperation;
@property (nonatomic) BOOL hasPreferAnonymousRequests;
@property (nonatomic) BOOL hasAllowsBackgroundNetworking;
@property (nonatomic) BOOL hasSourceApplicationBundleIdentifier;
@property (nonatomic) BOOL hasSourceApplicationSecondaryIdentifier;
@property (nonatomic) BOOL hasApplicationBundleIdentifierOverrideForContainerAccess;
@property (nonatomic) BOOL hasApplicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic) BOOL hasAdditionalRequestHTTPHeaders;
@property (nonatomic) BOOL hasIsCloudKitSupportOperation;
@property (nonatomic) BOOL hasCacheDeleteAvailableSpaceClass;
@property (retain, nonatomic) NSMutableDictionary *unitTestOverrides;
@property (nonatomic) BOOL xpcActivityAutomaticallyDefer;
@property (nonatomic) BOOL discretionarySchedulingForEntireOperation;
@property (copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier;
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
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)resolveAgainstGenericConfiguration:(id)a0;
- (void)setQualityOfServiceWithoutQoSChecks:(long long)a0;
- (void)setAutomaticallyRetryNetworkFailuresIfNotSet:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setApplicationBundleIdentifierOverride:(id)a0;

@end
