@class MAAutoAssetProgress, MAAutoAssetSelector, MAAutoAssetNotifications, NSDictionary, NSString, NSError;

@interface MAAutoAssetStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (retain, nonatomic) MAAutoAssetNotifications *notifications;
@property (retain, nonatomic) NSDictionary *availableForUseAttributes;
@property (retain, nonatomic) NSDictionary *newerVersionAttributes;
@property (nonatomic) BOOL neverBeenLocked;
@property (nonatomic) BOOL downloadUserInitiated;
@property (retain, nonatomic) MAAutoAssetProgress *downloadProgress;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (nonatomic) BOOL downloadedAsPatch;
@property (retain, nonatomic) MAAutoAssetSelector *patchedFromBaseSelector;
@property (nonatomic) long long patchedFromBaseFilesystemBytes;
@property (nonatomic) BOOL patchingAttempted;
@property (nonatomic) BOOL stagedPriorToAvailable;
@property (retain, nonatomic) NSString *stagedFromOSVersion;
@property (retain, nonatomic) NSString *stagedFromBuildVersion;
@property (retain, nonatomic) NSDictionary *currentLockUsage;
@property (retain, nonatomic) NSError *availableForUseError;
@property (retain, nonatomic) NSError *patchingAttemptError;
@property (retain, nonatomic) NSError *newerVersionError;

+ (id)newCurrentLockUsageSummary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)getAvailableForUseAttributesAssetFormat:(id *)a0 assetBuild:(id *)a1 minOSVersion:(id *)a2 maxOSVersion:(id *)a3 prerequisiteBuilds:(id *)a4;
- (id)initWithAssetSelector:(id)a0 withNotifications:(id)a1 withAvailableForUseAttributes:(id)a2 withNewerVersionAttributes:(id)a3 withDownloadUserInitiated:(BOOL)a4 withDownloadProgress:(id)a5 withDownloadedNetworkBytes:(long long)a6 withDownloadedFilesystemBytes:(long long)a7 withDownloadedAsPatch:(BOOL)a8 withPatchedFromBaseSelector:(id)a9 withPatchedFromBaseFilesystemBytes:(long long)a10 withPatchingAttempted:(BOOL)a11 withStagedPriorToAvailable:(BOOL)a12 withStagedFromOSVersion:(id)a13 withStagedFromBuildVersion:(id)a14 withCurrentLockUsage:(id)a15 withAvailableForUseError:(id)a16 withPatchingAttemptError:(id)a17 withNewerVersionError:(id)a18;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetSelector:(id)a0 withNotifications:(id)a1 withAvailableForUseAttributes:(id)a2 withNewerVersionAttributes:(id)a3 withNeverBeenLocked:(BOOL)a4 withDownloadUserInitiated:(BOOL)a5 withDownloadProgress:(id)a6 withDownloadedNetworkBytes:(long long)a7 withDownloadedFilesystemBytes:(long long)a8 withDownloadedAsPatch:(BOOL)a9 withPatchedFromBaseSelector:(id)a10 withPatchedFromBaseFilesystemBytes:(long long)a11 withPatchingAttempted:(BOOL)a12 withStagedPriorToAvailable:(BOOL)a13 withStagedFromOSVersion:(id)a14 withStagedFromBuildVersion:(id)a15 withCurrentLockUsage:(id)a16 withAvailableForUseError:(id)a17 withPatchingAttemptError:(id)a18 withNewerVersionError:(id)a19;
- (id)summary;
- (id)newSummaryDictionary;
- (id)copy;
- (id)description;
- (void).cxx_destruct;

@end
