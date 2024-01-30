@protocol MLPLearningRateDecayHandlerDelegate;

@interface MLPLearningRateDecayHandler : NSObject

@property (readonly) float learningRate;
@property (readonly) unsigned long long decaySteps;
@property (readonly) float decayRate;
@property (readonly) BOOL stairCase;
@property float decayedLearningRate;
@property unsigned long long globalSteps;
@property (weak) id<MLPLearningRateDecayHandlerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithLearningRate:(float)a0 decaySteps:(unsigned long long)a1 decayRate:(float)a2 stairCase:(BOOL)a3;
- (void)updateGlobalStep;

@end
