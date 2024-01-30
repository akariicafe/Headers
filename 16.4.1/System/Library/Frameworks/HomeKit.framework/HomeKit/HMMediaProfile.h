@class NSString, NSUUID, HMMediaSession, HMAccessorySettings, HMHome;
@protocol HMMediaProfileDelegate;

@interface HMMediaProfile : HMAccessoryProfile <_HMMediaProfileDelegate, HMAccessorySettingsContainerInternal, HMMediaObject, HMAccessorySettingsContainer, HMSleepWakeStateProvider>

@property (readonly, nonatomic) NSString *routeUID;
@property (readonly, nonatomic) unsigned long long capability;
@property (weak) id<HMMediaProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSUUID *containerUUID;
@property (readonly, weak) HMHome *containerHome;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)fetchAccessorySleepWakeStateWithCompletion:(id /* block */)a0;
- (id)initWithMediaProfile:(id)a0;
- (void)mediaProfile:(id)a0 didUpdateMediaSession:(id)a1;
- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (void)setCapability:(unsigned long long)a0;

@end
