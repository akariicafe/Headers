@class NSUUID, _HMContext, NSString, HMMediaSession, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue, _HMAudioControlDelegate;

@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (readonly, weak, nonatomic) HMMediaSession *mediaSession;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (weak) id<_HMAudioControlDelegate> delegate;
@property float volume;
@property (getter=isMuted) BOOL muted;
@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (void)__configureWithContext:(id)a0;
- (id)initWithMediaSession:(id)a0;
- (void)_handleAudioControlUpdated:(id)a0;
- (void)updateVolume:(float)a0 completionHandler:(id /* block */)a1;
- (void)updateMuted:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_registerNotificationHandlers;
- (id)messageDestination;

@end
