@class CKOperationMMCSRequestOptions, NSString, NSDictionary, CKOperationGroup, CKOperationConfiguration, NSNumber;

@interface CKOperationInfo : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _clientSDKVersion;
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *operationID;
@property (nonatomic) BOOL isOutstandingOperation;
@property (retain, nonatomic) NSString *ckOperationClassName;
@property (retain, nonatomic) NSString *operationDaemonCallbackProtocolName;
@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) CKOperationGroup *group;
@property (retain, nonatomic) CKOperationConfiguration *resolvedConfiguration;
@property (nonatomic) BOOL clientHasValidatedEntitlements;
@property (weak, nonatomic) id parentOperation;
@property (nonatomic) unsigned long long requestOriginator;
@property (readonly, nonatomic) BOOL isLongLived;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) BOOL automaticallyRetryNetworkFailures;
@property (readonly, nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) double timeoutIntervalForRequest;
@property (readonly, nonatomic) double timeoutIntervalForResource;
@property (readonly, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (readonly, nonatomic) BOOL isCloudKitSupportOperation;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (nonatomic) BOOL usesAssetDownloadStagingManager;
@property (nonatomic) BOOL wantsRequestStatistics;
@property (nonatomic) long long clientQueuePriority;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic) unsigned long long discretionaryWhenBackgroundedState;
@property (nonatomic) unsigned long long systemScheduler;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)takeValuesFrom:(id)a0;

@end
