@class HMFUnfairLock, NSMutableDictionary;

@interface HMDAccessoryPairingEventRetryMap : NSObject

@property (readonly, nonatomic) NSMutableDictionary *retryCountMap;
@property (readonly, nonatomic) HMFUnfairLock *accessoryPairingRetryMapLock;

+ (id)sharedInstance;

- (void)incrementRetryCount:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)retryCountForIdentifier:(id)a0;
- (void)clearRetryCountMap;

@end
