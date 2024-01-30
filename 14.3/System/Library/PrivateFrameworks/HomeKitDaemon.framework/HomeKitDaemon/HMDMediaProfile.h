@class HMDMediaSession, NSString, HMFUnfairLock;

@interface HMDMediaProfile : HMDAccessoryProfile <HMFLogging, HMFLocking> {
    HMFUnfairLock *_lock;
}

@property (retain) HMDMediaSession *mediaSession;
@property (readonly, nonatomic) unsigned long long capability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)namespace;
+ (BOOL)hasMessageReceiverChildren;
+ (id)uniqueIdentifierFromAccessory:(id)a0;
+ (id)sessionNamespace;

- (id)urlString;
- (void)unlock;
- (void)performBlock:(id /* block */)a0;
- (void)lock;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)unregisterForNotifications;
- (id)initWithAccessory:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)messageReceiverChildren;
- (void)updateWithResponses:(id)a0 message:(id)a1;
- (id)assistantObject;
- (void)handleSetValue:(id)a0 withRequestProperty:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)configureWithMessageDispatcher:(id)a0 configurationTracker:(id)a1;
- (id)initWithAccessory:(id)a0 uniqueIdentifier:(id)a1 services:(id)a2 workQueue:(id)a3;
- (void)_handleSetPower:(id)a0;
- (BOOL)_updatePlayback:(id)a0;
- (void)_handleMediaResponses:(id)a0 message:(id)a1;
- (BOOL)_updateRefreshPlayback:(id)a0;
- (void)sessionAudioControlUpdated:(id)a0;
- (void)handleSessionUpdatedNotification:(id)a0;
- (void)_handleSetValue:(id)a0 withRequestProperty:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_handleSetPlayback:(id)a0;
- (void)_handleMediaSessionSetAudioControl:(id)a0;
- (void)_handleRefreshPlayback:(id)a0;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)a0;
- (void)handleSessionVolumeUpdatedNotification:(id)a0;
- (BOOL)_updateAudioControl:(id)a0;
- (void)_sessionPlaybackStateUpdated:(id)a0 notifyXPCClients:(BOOL)a1;

@end
