@class NSDictionary, ICStoreDialogResponse;

@interface ICMusicSubscriptionLeaseStatus : NSObject <NSCopying>

@property (nonatomic) BOOL hasOnlinePlaybackKeys;
@property (nonatomic) BOOL hasOfflinePlaybackKeys;
@property (nonatomic) BOOL hasPendingLeaseAcquisition;
@property (nonatomic) BOOL shouldPlaybackRequireOnlineKeys;
@property (nonatomic) long long leaseState;
@property (copy, nonatomic) ICStoreDialogResponse *stateReasonDialog;
@property (copy, nonatomic) NSDictionary *stateReasonDialogMetricsDictionary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
