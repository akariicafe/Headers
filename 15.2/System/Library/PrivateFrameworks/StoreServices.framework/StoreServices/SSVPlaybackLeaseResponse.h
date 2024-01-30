@class NSData;

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse <NSCopying>

@property (readonly, nonatomic, getter=isOfflineSlotAvailable) BOOL offlineSlotAvailable;
@property (readonly, copy, nonatomic) NSData *leaseInfoData;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property (copy, nonatomic) NSData *certificateData;
@property (nonatomic) unsigned long long KDMovieIdentifier;
@property (readonly, nonatomic) double leaseDuration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemForItemIdentifier:(id)a0;

@end
