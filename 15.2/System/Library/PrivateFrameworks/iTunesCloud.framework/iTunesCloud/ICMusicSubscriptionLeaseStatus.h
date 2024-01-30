@class NSDictionary, ICStoreDialogResponse;

@interface ICMusicSubscriptionLeaseStatus : NSObject <NSCopying>

@property (nonatomic) BOOL hasOnlinePlaybackKeys;
@property (nonatomic) BOOL hasOfflinePlaybackKeys;
@property (nonatomic) BOOL hasPendingLeaseAcquisition;
@property (nonatomic, getter=isTakenDueToLeasePrevention) BOOL takenDueToLeasePrevention;
@property (nonatomic) BOOL shouldPlaybackRequireOnlineKeys;
@property (nonatomic) long long leaseState;
@property (copy, nonatomic) ICStoreDialogResponse *stateReasonDialog;
@property (copy, nonatomic) NSDictionary *stateReasonDialogMetricsDictionary;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
