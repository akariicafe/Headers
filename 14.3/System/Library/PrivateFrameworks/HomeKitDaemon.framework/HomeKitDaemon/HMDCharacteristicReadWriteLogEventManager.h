@class HMFUnfairLock, NSMutableDictionary;

@interface HMDCharacteristicReadWriteLogEventManager : NSObject

@property (class, readonly) HMDCharacteristicReadWriteLogEventManager *sharedInstance;

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly, nonatomic) NSMutableDictionary *consecutiveFailureCountByHMDAccessoryUUID;
@property (readonly, nonatomic) NSMutableDictionary *timeOfFirstFailureByHMDAccessoryUUID;

- (id)init;
- (void).cxx_destruct;
- (void)handleSubmittedErrorCode:(long long)a0 forAccessory:(id)a1;
- (unsigned long long)consecutiveFailureCountForAccessory:(id)a0;
- (double)timeIntervalSinceFirstFailureForAccessory:(id)a0;

@end
