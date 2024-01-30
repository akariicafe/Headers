@class NSString, NSArray, IMCloudKitSyncState, IMCloudKitSyncStatistics;

@interface IMCloudKitSyncProgress : NSObject

@property (nonatomic) BOOL shouldShowProgressBar;
@property (nonatomic) BOOL shouldShowUserActionLabel;
@property (nonatomic) BOOL shouldShowUserMessageLabel;
@property (nonatomic) BOOL shouldShowIndeterminateProgress;
@property (retain, nonatomic) NSString *progressLabel;
@property (retain, nonatomic) NSString *userMessageLabel;
@property (retain, nonatomic) NSString *actionLabel;
@property (nonatomic) long long actionType;
@property (nonatomic) double progressBarValue;
@property (nonatomic) double progressBarMax;
@property (nonatomic) double broadcastDeferralOverride;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) double remainingItems;
@property (readonly, nonatomic) NSString *percentCompleteString;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) IMCloudKitSyncState *syncState;
@property (readonly, nonatomic) IMCloudKitSyncStatistics *syncStatistics;

- (double)percentComplete;
- (id)errors;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)configureSelf;
- (id)initWithSyncState:(id)a0 syncStatistics:(id)a1;
- (id)percentCompleteString;
- (double)remainingItems;

@end
