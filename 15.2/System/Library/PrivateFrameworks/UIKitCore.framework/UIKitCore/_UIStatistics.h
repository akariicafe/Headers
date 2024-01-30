@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {
    NSString *_key;
    double _sampleValue;
    NSMutableSet *_children;
}

@property (nonatomic) double sampleRate;

+ (id)previewInteractionPeekDuration;
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)a0;
+ (id)controlValueChangeEmittedCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)zoomGestureCount;
+ (id)previewInteractionPeekCount;
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)a0;
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)a0;
+ (id)pinchGestureCount;
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)a0;
+ (id)_sharedStatisticWithDomain:(id)a0 statisticsClass:(Class)a1 identifierReporting:(long long)a2;
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)a0;
+ (id)alertButtonTapCount;
+ (id)recentsInputViewNewEntryCount;
+ (id)maxForce;
+ (id)recentsInputViewItemSelectedCount;
+ (id)previewInteractionTapCount;
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)a0;
+ (id)feedbackEngineActivationCountWithSuffix:(id)a0;
+ (id)previewInteractionPeekForce;
+ (id)scrollBounceCount;
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)a0;
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)a0;
+ (unsigned long long)currentTime;
+ (id)coverSheetButtonMaximumForceWithActivation:(BOOL)a0 category:(id)a1;
+ (id)coverSheetButtonInteractionCountWithActivation:(BOOL)a0 category:(id)a1;
+ (id)previewInteractionPopCount;
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)a0;
+ (id)feedbackEngineActivationDurationWithSuffix:(id)a0;
+ (id)scrubberUsageTime;
+ (id)controlInteractionDurationDistributionWithCategory:(id)a0 suffix:(id)a1;
+ (id)previewInteractionPopForce;
+ (id)controlTapCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)recentsInputViewPresentationCount;
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)a0;
+ (id)scrubberUsageCount;
+ (id)previewInteractionAlertPresentationCount;
+ (id)recentsInputViewNumberOfItems;

- (id)_key;
- (id)initWithDomain:(id)a0;
- (void)_setValue:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_shouldSample;
- (id)initWithDomain:(id)a0 identifierReporting:(long long)a1;
- (void)_resetValue;
- (void)_resetDistribution;
- (void)_resetDistributionToValue:(double)a0;
- (void)_recordDistributionValue:(double)a0;
- (void)_recordDistributionTime:(unsigned long long)a0;
- (void)_incrementValueBy:(long long)a0;
- (void)_addChildStatistic:(id)a0;
- (void)_removeChildStatistic:(id)a0;
- (void)randomizeSampleValue;

@end
