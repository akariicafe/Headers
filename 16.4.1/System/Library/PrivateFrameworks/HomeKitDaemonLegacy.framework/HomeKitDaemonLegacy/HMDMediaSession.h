@class NSUUID, NSString, HMDMediaSessionState, NSArray, HMFTimer, NSSet, NSMutableArray, NSObject, NSMutableSet, HMDMediaEndpoint;
@protocol OS_dispatch_queue;

@interface HMDMediaSession : HMFObject <HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_mediaProfiles;
}

@property (class, readonly, copy, nonatomic) NSArray *mediaPropertyMessageKeys;
@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMDMediaEndpoint *endpoint;
@property (retain, nonatomic) HMDMediaSessionState *state;
@property (retain, nonatomic) NSMutableArray *setPlaybackStateCompletionHandlers;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic, getter=isCurrentAccessorySession) BOOL currentAccessorySession;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) HMFTimer *setPlaybackStateTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSArray *mediaProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (Class)mediaPropertyValueTypeWithMessageKey:(id)a0;
+ (id)sessionForCurrentAccessoryWithSessionIdentifier:(id)a0 mediaProfile:(id)a1;

- (void)timerDidFire:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateEndpoint:(id)a0;
- (void)_getPlaybackStateWithCompletion:(id /* block */)a0;
- (void)_handleGetPlaybackState:(id)a0;
- (void)_handleMediaSessionSetAudioControl:(id)a0;
- (void)_handleMediaUpdateMuted:(id)a0;
- (void)_handleMediaUpdateVolume:(id)a0;
- (void)_handleSetPlayback:(id)a0;
- (id)_initWithEndpoint:(id)a0 mediaProfiles:(id)a1 state:(id)a2;
- (id)_initWithMediaProfiles:(id)a0 state:(id)a1;
- (void)_invokePendingSetPlaybackStateBlocksOfError:(id)a0;
- (void)_notifyClientsOfUpdatedVolume:(id)a0 muted:(id)a1 inResponseToMessage:(id)a2;
- (void)_postNotificationOfMediaStateUpdate;
- (void)_postNotificationOfMediaStateUpdateWithPayload:(id)a0;
- (void)_postNotificationOfMediaStateUpdateWithRequestMessageInformation:(id)a0;
- (void)_queueSetPlaybackStateCompletion:(id /* block */)a0;
- (void)_registerForSessionUpdates:(BOOL)a0;
- (void)_setPlaybackState:(long long)a0 completion:(id /* block */)a1;
- (void)addMediaProfile:(id)a0;
- (void)evaluateIfMediaPlaybackStateChanged:(id)a0;
- (void)handleMediaPlaybackStateNotification:(id)a0;
- (void)handleMediaSessionSetAudioControl:(id)a0;
- (void)handleRefreshPlayback:(id)a0;
- (void)handleSetPlayback:(id)a0;
- (id)initWithEndpoint:(id)a0 mediaProfiles:(id)a1 state:(id)a2;
- (void)readProperties:(id)a0 completion:(id /* block */)a1;
- (void)registerForSessionUpdates:(BOOL)a0;
- (void)removeMediaProfile:(id)a0;
- (void)updateWithResponses:(id)a0 requestMessageInformation:(id)a1;
- (void)writeProperties:(id)a0 completion:(id /* block */)a1;

@end
