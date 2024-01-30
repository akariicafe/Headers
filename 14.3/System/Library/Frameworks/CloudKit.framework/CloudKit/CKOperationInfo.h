@class CKOperationMMCSRequestOptions, NSString, NSDictionary, NSNumber, CKOperationGroup, CKContainerSetupInfo, CKOperationConfiguration;

@interface CKOperationInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *operationID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *parentSectionID;
@property (nonatomic) BOOL isLongLived;
@property (nonatomic) BOOL isOutstandingOperation;
@property (retain, nonatomic) CKContainerSetupInfo *setupInfo;
@property (retain, nonatomic) NSString *ckOperationClassName;
@property (retain, nonatomic) NSString *operationDaemonCallbackProtocolName;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) CKOperationGroup *group;
@property (retain, nonatomic) CKOperationConfiguration *perOpConfiguration;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic) BOOL clientHasValidatedEntitlements;
@property (weak, nonatomic) id parentOperation;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) BOOL automaticallyRetryNetworkFailures;
@property (readonly, nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) BOOL allowsBackgroundNetworking;
@property (readonly, nonatomic) double timeoutIntervalForRequest;
@property (readonly, nonatomic) double timeoutIntervalForResource;
@property (readonly, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (readonly, nonatomic) BOOL isCloudKitSupportOperation;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (nonatomic) BOOL wantsRequestStatistics;
@property (readonly, nonatomic) CKOperationConfiguration *resolvedConfiguration;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic) unsigned long long discretionaryWhenBackgroundedState;
@property (nonatomic) unsigned long long systemScheduler;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)takeValuesFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
