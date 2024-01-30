@class NSString, HMMediaSession, HMAccessorySettings, HMHome;
@protocol HMMediaProfileDelegate;

@interface HMMediaProfile : HMAccessoryProfile <_HMMediaProfileDelegate, HMMediaObject, HMAccessorySettingsContainer>

@property (readonly, nonatomic) NSString *routeUID;
@property (readonly, nonatomic) unsigned long long capability;
@property (weak) id<HMMediaProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;
@property (readonly, weak) HMHome *containerHome;

- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithMediaProfile:(id)a0;
- (void)mediaProfile:(id)a0 didUpdateMediaSession:(id)a1;
- (void)setCapability:(unsigned long long)a0;

@end
