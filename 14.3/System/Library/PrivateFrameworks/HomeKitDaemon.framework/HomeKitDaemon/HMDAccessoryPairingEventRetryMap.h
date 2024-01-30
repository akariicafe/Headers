@class HMFUnfairLock, NSMutableDictionary;

@interface HMDAccessoryPairingEventRetryMap : NSObject

@property (readonly, nonatomic) NSMutableDictionary *retryCountMap;
@property (readonly, nonatomic) HMFUnfairLock *accessoryPairingRetryMapLock;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)retryCountForIdentifier:(id)a0;
- (void)clearRetryCountMap;
- (void)incrementRetryCount:(id)a0;

@end
