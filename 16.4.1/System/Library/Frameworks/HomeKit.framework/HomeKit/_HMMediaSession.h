@class NSUUID, NSString, _HMContext, HMAudioControl, NSObject;
@protocol OS_dispatch_queue, _HMMediaSessionDelegate;

@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSUUID *messageTargetUUID;
@property (weak, nonatomic) id<_HMMediaSessionDelegate> delegate;
@property (readonly) long long playbackState;
@property (readonly) long long shuffleState;
@property (readonly) long long repeatState;
@property (readonly, copy) NSString *mediaUniqueIdentifier;
@property (readonly, nonatomic) NSString *routeUID;
@property (retain, nonatomic) _HMContext *context;
@property (readonly) HMAudioControl *audioControl;
@property (readonly) unsigned long long sleepWakeState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaybackState:(long long)a0;
- (id)messageDestination;
- (void)setUuid:(id)a0;
- (void)setRouteUID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setRepeatState:(long long)a0;
- (void)_handleSessionPlaybackUpdated:(id)a0;
- (void)_handleSessionRouteUIDUpdated:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)_notifyDelegateOfUpdatedMediaState;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)a0;
- (void)_notifyDelegateOfUpdatedRouteUID:(id)a0;
- (void)_registerNotificationHandlers;
- (void)_updateMediaState:(id)a0 completion:(id /* block */)a1;
- (id)initWithUUID:(id)a0 routeUID:(id)a1 playbackState:(long long)a2 shuffleState:(long long)a3 repeatState:(long long)a4 audioControl:(id)a5 mediaUniqueIdentifier:(id)a6 sleepWakeState:(unsigned long long)a7;
- (void)refreshPlaybackStateWithCompletionHandler:(id /* block */)a0;
- (void)setMediaUniqueIdentifier:(id)a0;
- (void)setPlaybackState:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setShuffleState:(long long)a0;
- (void)setSleepWakeState:(unsigned long long)a0;
- (void)updateMediaState:(id)a0;
- (void)updatePlaybackState:(id)a0;

@end
