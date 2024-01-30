@class SCNNode, NSString, NTKSnowglobeDigitProfile;

@interface NTKSnowglobeEyeController : NSObject <NTKSnowglobeSceneSubController> {
    struct { float blinkProgress; double nextBlink; float squintProgress; BOOL squint; double nextSquintChange; double squintChange; } _idleState;
    unsigned long long _state;
    unsigned long long _transitionState;
    double _transitionFraction;
    BOOL _transitionAutomatic;
    double _transitionDuration;
    NTKSnowglobeDigitProfile *_profile;
}

@property (readonly, nonatomic) SCNNode *leftEyeNode;
@property (readonly, nonatomic) SCNNode *rightEyeNode;
@property (nonatomic) BOOL animationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateAtTime:(double)a0;
- (void)_updateWeights;
- (void)transitionToState:(unsigned long long)a0 withFraction:(double)a1;
- (void)transitionToState:(unsigned long long)a0 withDuration:(double)a1;
- (void)_decideNextBlink:(double)a0;
- (void)_decideNextSquintChange:(double)a0;
- (void)_updateIdleStateForTime:(double)a0;
- (struct { float x0; float x1; float x2; float x3; float x4; })_weightForState:(unsigned long long)a0;
- (id)initWithLeftNode:(id)a0 rightNode:(id)a1 digitProfile:(id)a2;

@end
