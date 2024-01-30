@class NSDate, NSString, SVXSessionManager, SVXModule, NSMutableDictionary, SVXDeviceSetupFlowScene, SVXDeviceSetupAnnouncer, SVXSpeechSynthesizer, SVXDeviceSetupContext;

@interface SVXDeviceSetupManager : NSObject <SVXModuleInstance, SVXSessionActivationListening, AFMemoryPressureListening> {
    SVXModule *_module;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXSessionManager *_sessionManager;
    NSMutableDictionary *_cachedSceneMapsByVoiceKey;
    SVXDeviceSetupAnnouncer *_announcer;
    NSMutableDictionary *_contextsByUUID;
    NSDate *_beginDate;
    NSDate *_endDate;
    SVXDeviceSetupFlowScene *_activatedDeviceSetupFlowScene;
    SVXDeviceSetupContext *_effectiveContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)memoryPressureObserver:(id)a0 didChangeFromCondition:(long long)a1 toCondition:(long long)a2;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)getContextWithCompletion:(id /* block */)a0;
- (void)prepareForSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)_prepareTryHeySiriMusicSceneWithLanguageCode:(id)a0 gender:(long long)a1 completion:(id /* block */)a2;
- (void)_cacheScene:(id)a0 forLanguageCode:(id)a1 andGender:(long long)a2;
- (id)_cachedSceneWithID:(long long)a0 forLanguageCode:(id)a1 andGender:(long long)a2 siriCapabilitiesHint:(id)a3;
- (void)_evictCachedContents;
- (void)_prepareForSetupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_prepareSiriCapabilitiesSceneWithID:(long long)a0 languageCode:(id)a1 gender:(long long)a2 hint:(id)a3 completion:(id /* block */)a4;
- (void)_prepareSiriIntroSceneWithLanguageCode:(id)a0 gender:(long long)a1 completion:(id /* block */)a2;
- (void)_prepareTryHeySiriCapabilitiesSceneWithLanguageCode:(id)a0 gender:(long long)a1 completion:(id /* block */)a2;
- (void)_prepareTryHeySiriNewsSceneWithLanguageCode:(id)a0 gender:(long long)a1 completion:(id /* block */)a2;
- (void)_prepareTryHeySiriWeatherSceneWithLanguageCode:(id)a0 gender:(long long)a1 completion:(id /* block */)a2;
- (void)_setContext:(id)a0 forUUID:(id)a1;
- (void)_setEffectiveContext:(id)a0;
- (void)_updateEffectiveContext;
- (void)sessionManager:(id)a0 didActivateWithContext:(id)a1;
- (void)setContext:(id)a0 forUUID:(id)a1;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;

@end
