@class HMFUnfairLock, NSMutableDictionary;

@interface HMDCharacteristicReadWriteLogEventManager : NSObject

@property (class, readonly) HMDCharacteristicReadWriteLogEventManager *sharedInstance;

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly, nonatomic) NSMutableDictionary *consecutiveFailureCountByHMDAccessoryUUID;
@property (readonly, nonatomic) NSMutableDictionary *timeOfFirstFailureByHMDAccessoryUUID;

- (void).cxx_destruct;
- (id)init;
- (void)handleSubmittedErrorCode:(long long)a0 forAccessoryUUID:(id)a1;
- (unsigned long long)consecutiveFailureCountForAccessoryUUID:(id)a0;
- (double)timeIntervalSinceFirstFailureForAccessoryUUID:(id)a0;

@end
