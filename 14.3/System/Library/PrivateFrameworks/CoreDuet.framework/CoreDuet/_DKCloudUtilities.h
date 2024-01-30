@class NSString, _DKThrottledActivity, NSObject;
@protocol OS_dispatch_queue;

@interface _DKCloudUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _DKThrottledActivity *_activityThrottler;
    BOOL _supportsDeviceToDeviceEncryption;
    BOOL _isSingleDevice;
}

@property (class, getter=isCloudKitEnabled) BOOL cloudKitEnabled;
@property (class, getter=isUnitTesting) BOOL unitTesting;
@property (class, readonly, nonatomic) NSString *containerIdentifier;
@property (class, readonly, nonatomic) BOOL isSyncAvailableAndEnabled;

@property (readonly, nonatomic) BOOL isSingleDevice;
@property (readonly, nonatomic) BOOL isCloudSyncAvailable;
@property (readonly, nonatomic) BOOL isSiriCloudSyncEnabled;
@property (readonly, nonatomic) BOOL supportsDeviceToDeviceEncryption;

+ (id)sharedInstance;
+ (BOOL)isSyncAvailableAndEnabledWithVerboseLogging:(BOOL)a0;

- (id)init;
- (void)_accountDidChange:(id)a0;
- (void).cxx_destruct;
- (void)deleteRemoteStateWithReply:(id /* block */)a0;
- (void)dealloc;
- (void)setCloudSyncAvailable:(BOOL)a0;

@end
