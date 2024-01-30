@class _UIModulationFeedbackGeneratorConfiguration, _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIModulationFeedbackGenerator : UIFeedbackGenerator {
    double _currentValue;
}

@property (readonly, nonatomic, getter=_modulationConfiguration) _UIModulationFeedbackGeneratorConfiguration *modulationConfiguration;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (id)_stats_key;
- (void).cxx_destruct;
- (void)activateWithCompletionBlock:(id /* block */)a0;
- (void)valueUpdated:(double)a0;
- (void)activateWithInitialValue:(double)a0 completionBlock:(id /* block */)a1;
- (void)deactivate;

@end
