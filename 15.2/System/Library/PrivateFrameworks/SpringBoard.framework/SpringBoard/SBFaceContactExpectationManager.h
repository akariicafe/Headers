@class SBSceneManager, SBProximitySensorManager;

@interface SBFaceContactExpectationManager : NSObject {
    SBSceneManager *_sceneManager;
    SBProximitySensorManager *_proximitySensorManager;
    BOOL _faceExpected;
}

- (id)_frontmostScenesExpectingFaceContact;
- (id)initWithSceneManager:(id)a0;
- (void)updateFaceContactExpectation;
- (id)initWithSceneManager:(id)a0 proximitySensorManager:(id)a1;
- (id)description;
- (id)_proximitySensorClientID;
- (void).cxx_destruct;

@end
