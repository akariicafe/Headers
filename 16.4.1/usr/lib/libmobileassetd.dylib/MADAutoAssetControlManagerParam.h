@class MAAutoAssetProgress, MADAutoAssetClientRequest, MADAutoAssetJobInformation, MADAutoAssetJob, NSDictionary, SUCoreConnectMessage, MAAutoAssetStatus, NSString, NSArray, MAAutoAssetSelector, MADAutoAssetDescriptor, NSError, SUCoreConnectClientProxy;

@interface MADAutoAssetControlManagerParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *paramSafeSummary;
@property (readonly, nonatomic) long long paramType;
@property (readonly, retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) MADAutoAssetClientRequest *clientRequest;
@property (retain, nonatomic) NSArray *clientRequestArray;
@property (readonly, retain, nonatomic) SUCoreConnectMessage *clientRequestMessage;
@property (readonly, retain, nonatomic) SUCoreConnectClientProxy *clientProgressProxy;
@property (readonly, retain, nonatomic) SUCoreConnectMessage *responseMessage;
@property (retain, nonatomic) NSError *responseError;
@property (readonly, retain, nonatomic) NSArray *downloadsInFlight;
@property (retain, nonatomic) NSString *autoAssetJobID;
@property (readonly, retain, nonatomic) NSDictionary *autoAssetCatalog;
@property (readonly, retain, nonatomic) NSError *lockForUseError;
@property (readonly, retain, nonatomic) NSError *finishedError;
@property (retain, nonatomic) MADAutoAssetJobInformation *jobInformation;
@property (readonly, retain, nonatomic) MAAutoAssetProgress *downloadProgress;
@property (readonly, retain, nonatomic) MAAutoAssetStatus *autoAssetStatus;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *autoAssetSelector;
@property (retain, nonatomic) NSString *autoAssetUUID;
@property (retain, nonatomic) MADAutoAssetJob *fromAutoAssetJob;
@property (retain, nonatomic) MAAutoAssetSelector *originalSelector;
@property (readonly, retain, nonatomic) NSArray *setOfAutoAssetSelectors;
@property (readonly, retain, nonatomic) NSArray *pushNotifications;
@property (retain, nonatomic) NSString *assetTargetOSVersion;
@property (retain, nonatomic) NSString *assetTargetBuildVersion;
@property (retain, nonatomic) NSArray *stagedToDownloaded;
@property (retain, nonatomic) MADAutoAssetDescriptor *downloadingDescriptor;
@property (retain, nonatomic) MADAutoAssetDescriptor *baseForPatchDescriptor;
@property (readonly, nonatomic) BOOL schedulerInvolved;
@property (readonly, nonatomic) BOOL potentialNetworkFailure;
@property (copy, nonatomic) id /* block */ clientReplyCompletion;

- (id)initForCurrentJobID:(id)a0 withProgress:(id)a1;
- (id)_summary;
- (id)initForTimerFired;
- (void)encodeWithCoder:(id)a0;
- (id)initForTriggeredSelectors:(id)a0;
- (id)initWithDownloadsInFlight:(id)a0;
- (id)initForStagerJobStart:(id)a0 withAssetTargetOSVersion:(id)a1 withAssetTargetBuildVersion:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initForReceivedPushNotifications:(id)a0;
- (id)initWithClientID:(id)a0;
- (id)initForStagerJobInformation:(id)a0;
- (id)initForAssetSelector:(id)a0;
- (id)summary;
- (id)initForFinishedJobSelector:(id)a0 withAutoAssetUUID:(id)a1 withSchedulerInvolved:(BOOL)a2 withPotentialNetworkFailure:(BOOL)a3;
- (id)initForConfigFinishedJobID:(id)a0 withError:(id)a1;
- (id)initForTriggeredNoActivity;
- (id)initForJobIssueProgress:(id)a0 forAutoAssetSelector:(id)a1 withAutoAssetUUID:(id)a2 withJobCurrentStatus:(id)a3 withLockForUseError:(id)a4;
- (id)initWithPromoted:(id)a0;
- (id)description;
- (id)initForFinishedJobID:(id)a0 withCatalog:(id)a1 withError:(id)a2;
- (id)initWithSafeSummary:(id)a0;
- (id)initForJobIssueReply:(id /* block */)a0 forAutoAssetSelector:(id)a1 withAutoAssetUUID:(id)a2 withResponseMessage:(id)a3 withResponseError:(id)a4;
- (void).cxx_destruct;
- (id)initForFinishedJobID:(id)a0 withError:(id)a1;
- (id)initForJobFoundSelector:(id)a0 withAutoAssetUUID:(id)a1;
- (id)initWithClientRequest:(id)a0 reportingProgressThroughProxy:(id)a1 withReplyCompletion:(id /* block */)a2;
- (void)updateSafeSummary;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withClientID:(id)a2 withClientRequestMessage:(id)a3 withClientProgressProxy:(id)a4 withClientReplyCompletion:(id /* block */)a5 withResponseMessage:(id)a6 withResponseError:(id)a7 withDownloadsInFlight:(id)a8 withAutoAssetJobID:(id)a9 withAutoAssetCatalog:(id)a10 withLockForUseError:(id)a11 withFinishedError:(id)a12 withDownloadProgress:(id)a13 withJobCurrentStatus:(id)a14 withAutoAssetSelector:(id)a15 withAutoAssetUUID:(id)a16 withSetOfAutoAssetSelectors:(id)a17 withPushNotifications:(id)a18 withAssetTargetOSVersion:(id)a19 withAssetTargetBuildVersion:(id)a20 withStagedToDownloaded:(id)a21 withDownloadingDescriptor:(id)a22 withBaseForPatchDescriptor:(id)a23 withSchedulerInvolved:(BOOL)a24 withPotentialNetworkFailure:(BOOL)a25;

@end
