@class SBSceneManager, SBProximitySensorManager;

@interface SBFaceContactExpectationManager : NSObject {
    SBSceneManager *_sceneManager;
    SBProximitySensorManager *_proximitySensorManager;
    BOOL _faceExpected;
}

- (void).cxx_destruct;
- (id)_frontmostScenesExpectingFaceContact;
- (void)updateFaceContactExpectation;
- (id)description;
- (id)initWithSceneManager:(id)a0 proximitySensorManager:(id)a1;
- (id)_proximitySensorClientID;
- (id)initWithSceneManager:(id)a0;

@end
