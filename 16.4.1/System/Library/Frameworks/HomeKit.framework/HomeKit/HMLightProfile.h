@class NSString, _HMLightProfile, HMLightProfileSettings;
@protocol HMLightProfileDelegate;

@interface HMLightProfile : HMAccessoryProfile <HMFLogging>

@property (readonly) NSString *logIdentifier;
@property (readonly) _HMLightProfile *lightProfile;
@property (weak) id<HMLightProfileDelegate> delegate;
@property (readonly) HMLightProfileSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)a0 completion:(id /* block */)a1;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (id)initWithLightProfile:(id)a0;
- (void)setNaturalLightingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setNaturalLightingEnabled:(BOOL)a0 shouldRetryOnFailure:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateSettings:(id)a0 withReason:(id)a1;

@end
