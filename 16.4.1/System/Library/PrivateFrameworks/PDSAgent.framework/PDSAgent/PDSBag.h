@class NSNumber, NSArray;

@interface PDSBag : IDSServerBag

@property (readonly, nonatomic) long long ttlFromBag;
@property (readonly, nonatomic) long long ttlWindowFromBag;
@property (readonly, nonatomic) long long ttlGracePeriodFromBag;
@property (readonly, nonatomic) double coalesceDelayFromBag;
@property (readonly, nonatomic) double coalescePeriodFromBag;
@property (readonly, nonatomic) double coalesceMaxPeriodFromBag;
@property (readonly, nonatomic) double messageTimeoutFromBag;
@property (readonly, nonatomic) BOOL bagKillSwitchActive;
@property (readonly, nonatomic) NSNumber *minEnabledVersion;
@property (readonly, nonatomic) BOOL allRequiredBagCoalescingValuesPresent;
@property (readonly, nonatomic) BOOL allRequiredBagTTLValuesPresent;
@property (readonly, nonatomic) NSArray *nonCoalescingTopicsFromBag;

- (BOOL)topicAvoidsCoalescing:(id)a0;
- (unsigned long long)_bagDomain;
- (long long)ttlWindowFromDefault;
- (long long)ttlFromDefault;
- (long long)ttlGracePeriodFromDefault;
- (id)init;
- (BOOL)_valuesDefinedAsNumbersInBagForKeys:(id)a0;
- (void)_bagExternallyReloaded;

@end
