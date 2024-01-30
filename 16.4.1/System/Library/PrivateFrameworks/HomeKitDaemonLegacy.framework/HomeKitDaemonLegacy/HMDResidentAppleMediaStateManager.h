@class NSString, NSMutableSet, HMFTimer;
@protocol HMDResidentAppleMediaStateManagerDataSource, HMDResidentAppleMediaStateManagerDelegate;

@interface HMDResidentAppleMediaStateManager : HMFObject <HMDNotificationRegistryDelegate, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<HMDResidentAppleMediaStateManagerDataSource> _dataSource;
    id<HMDResidentAppleMediaStateManagerDelegate> _delegate;
    NSMutableSet *_subscribedMediaProfiles;
    NSMutableSet *_mediaProfilesToRetry;
    HMFTimer *_retryTimer;
    unsigned long long _retryCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;
- (void)configureWithNotificationRegistry:(id)a0 notificationCenter:(id)a1;
- (void)handleAppleMediaAccessoryReachabilityChanged:(id)a0;
- (void)mediaPropertyRegistrationsDidChangeForMediaProfiles:(id)a0;

@end
