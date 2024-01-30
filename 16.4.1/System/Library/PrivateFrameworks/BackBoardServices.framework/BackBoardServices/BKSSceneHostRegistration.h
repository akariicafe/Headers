@class NSString, BKSSceneHostSettings, BKSTouchEventService;

@interface BKSSceneHostRegistration : NSObject <BSDescriptionStreamable, BSInvalidatable> {
    unsigned int _contextID;
    BKSTouchEventService *_service;
    BKSSceneHostSettings *_sceneHostSettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (void)invalidate;
- (void)updateSettings:(id)a0;
- (void).cxx_destruct;

@end
