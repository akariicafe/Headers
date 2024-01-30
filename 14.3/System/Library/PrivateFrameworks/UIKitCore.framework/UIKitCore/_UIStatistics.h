@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {
    NSString *_key;
    double _sampleValue;
    NSMutableSet *_children;
}

@property (nonatomic) double sampleRate;

+ (id)previewInteractionAlertPresentationCount;
+ (id)previewInteractionPopForce;
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)a0;
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)a0;
+ (id)controlValueChangeEmittedCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)pinchGestureCount;
+ (id)feedbackEngineActivationDurationWithSuffix:(id)a0;
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)a0;
+ (id)controlInteractionDurationDistributionWithCategory:(id)a0 suffix:(id)a1;
+ (id)coverSheetButtonMaximumForceWithActivation:(BOOL)a0 category:(id)a1;
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)a0;
+ (id)previewInteractionPopCount;
+ (id)recentsInputViewNewEntryCount;
+ (id)scrubberUsageCount;
+ (id)previewInteractionPeekDuration;
+ (unsigned long long)currentTime;
+ (id)feedbackEngineActivationCountWithSuffix:(id)a0;
+ (id)coverSheetButtonInteractionCountWithActivation:(BOOL)a0 category:(id)a1;
+ (id)scrubberUsageTime;
+ (id)zoomGestureCount;
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)a0;
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)a0;
+ (id)previewInteractionPeekForce;
+ (id)alertButtonTapCount;
+ (id)_sharedStatisticWithDomain:(id)a0 statisticsClass:(Class)a1 identifierReporting:(long long)a2;
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)a0;
+ (id)maxForce;
+ (id)recentsInputViewItemSelectedCount;
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)a0;
+ (id)recentsInputViewPresentationCount;
+ (id)scrollBounceCount;
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)a0;
+ (id)recentsInputViewNumberOfItems;
+ (id)previewInteractionPeekCount;
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)a0;
+ (id)controlTapCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)previewInteractionTapCount;

- (id)_key;
- (id)initWithDomain:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_resetDistributionToValue:(double)a0;
- (void)_resetDistribution;
- (BOOL)_shouldSample;
- (id)initWithDomain:(id)a0 identifierReporting:(long long)a1;
- (void)_recordDistributionValue:(double)a0;
- (void)_recordDistributionTime:(unsigned long long)a0;
- (void)_incrementValueBy:(long long)a0;
- (void)_addChildStatistic:(id)a0;
- (void)_removeChildStatistic:(id)a0;
- (void)randomizeSampleValue;
- (id)description;
- (void)_setValue:(long long)a0;
- (void)_resetValue;

@end
