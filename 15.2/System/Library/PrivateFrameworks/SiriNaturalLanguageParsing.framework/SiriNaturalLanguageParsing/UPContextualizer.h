@class UPContextualizerStrategyOffer, UPContextualizerStrategyPrompt, UPContextualizerStrategyOptions, UPContextualizerStrategyCancel;

@interface UPContextualizer : NSObject

@property (readonly, nonatomic) UPContextualizerStrategyCancel *cancelContextualizerStrategy;
@property (readonly, nonatomic) UPContextualizerStrategyOffer *offerContextualizerStrategy;
@property (readonly, nonatomic) UPContextualizerStrategyOptions *optionsContextualizerStrategy;
@property (readonly, nonatomic) UPContextualizerStrategyPrompt *promptContextualizerStrategy;
@property (readonly, nonatomic) double prebuiltIntentThreshold;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPrebuiltIntentThreshold:(double)a0;
- (id)resultWithContextualizerInput:(id)a0;
- (id)_contextualizeByDialogActTypeUsingContextualizerInput:(id)a0;

@end
