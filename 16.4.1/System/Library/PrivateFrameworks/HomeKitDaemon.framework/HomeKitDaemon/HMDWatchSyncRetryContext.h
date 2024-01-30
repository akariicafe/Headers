@class NSString, HMDWatchSync;

@interface HMDWatchSyncRetryContext : HMFObject <NSCopying>

@property (readonly) double initialRetryInterval;
@property (readonly) long long maximumRetryAttempts;
@property (readonly, copy) HMDWatchSync *watchSync;
@property (readonly, copy) NSString *watchIdentifier;
@property (readonly) long long retryAttempt;
@property (readonly) double retryInterval;

+ (id)createWithWatchIdentifier:(id)a0 watchSync:(id)a1 retryAttempt:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithWatchIdentifier:(id)a0 watchSync:(id)a1 retryAttempt:(long long)a2 initialRetryInterval:(double)a3 maximumRetryAttempts:(long long)a4;

@end
