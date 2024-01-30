@class NSUUID, NSString, _HMContext, HMFUnfairLock, HMAudioControl, NSObject;
@protocol OS_dispatch_queue, _HMMediaSessionDelegate;

@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge> {
    HMFUnfairLock *_lock;
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
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaybackState:(long long)a0;
- (void)setRouteUID:(id)a0;
- (void)setUuid:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)messageDestination;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_registerNotificationHandlers;
- (id)initWithUUID:(id)a0 routeUID:(id)a1 playbackState:(long long)a2 shuffleState:(long long)a3 repeatState:(long long)a4 audioControl:(id)a5 mediaUniqueIdentifier:(id)a6;
- (void)setShuffleState:(long long)a0;
- (void)setRepeatState:(long long)a0;
- (void)setMediaUniqueIdentifier:(id)a0;
- (void)setPlaybackState:(long long)a0 completionHandler:(id /* block */)a1;
- (void)refreshPlaybackStateWithCompletionHandler:(id /* block */)a0;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)a0;
- (void)_notifyDelegateOfUpdatedMediaState;
- (void)_handleSessionPlaybackUpdated:(id)a0;
- (void)_updateMediaState:(id)a0 completion:(id /* block */)a1;
- (void)updatePlaybackState:(id)a0;
- (void)updateMediaState:(id)a0;
- (void)_notifyDelegateOfUpdatedRouteUID:(id)a0;
- (void)_handleSessionRouteUIDUpdated:(id)a0;

@end
