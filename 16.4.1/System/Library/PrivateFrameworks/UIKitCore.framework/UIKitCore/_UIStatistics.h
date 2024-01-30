@class NSString, NSMutableSet;

@interface _UIStatistics : NSObject {
    NSString *_key;
    double _sampleValue;
    NSMutableSet *_children;
}

@property (nonatomic) double sampleRate;

+ (id)previewInteractionPeekDuration;
+ (id)previewInteractionPopCount;
+ (id)scrollBounceCount;
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)a0;
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)a0;
+ (id)previewInteractionPeekForce;
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)a0;
+ (id)scrubberUsageCount;
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)a0;
+ (id)feedbackEngineActivationCountWithSuffix:(id)a0;
+ (id)controlValueChangeEmittedCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)recentsInputViewPresentationCount;
+ (unsigned long long)currentTime;
+ (id)pinchGestureCount;
+ (id)controlTapCountWithCategory:(id)a0 suffix:(id)a1;
+ (id)coverSheetButtonInteractionCountWithActivation:(BOOL)a0 category:(id)a1;
+ (id)recentsInputViewNewEntryCount;
+ (id)previewInteractionAlertPresentationCount;
+ (id)maxForce;
+ (id)alertButtonTapCount;
+ (id)coverSheetButtonMaximumForceWithActivation:(BOOL)a0 category:(id)a1;
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)a0;
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)a0;
+ (id)previewInteractionTapCount;
+ (id)previewInteractionPopForce;
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)a0;
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)a0;
+ (id)scrubberUsageTime;
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)a0;
+ (id)feedbackEngineActivationDurationWithSuffix:(id)a0;
+ (id)zoomGestureCount;
+ (id)_sharedStatisticWithDomain:(id)a0 statisticsClass:(Class)a1 identifierReporting:(long long)a2;
+ (id)recentsInputViewItemSelectedCount;
+ (id)recentsInputViewNumberOfItems;
+ (id)controlInteractionDurationDistributionWithCategory:(id)a0 suffix:(id)a1;
+ (id)previewInteractionPeekCount;
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)a0;

- (void)_setValue:(long long)a0;
- (id)initWithDomain:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_key;
- (void)_addChildStatistic:(id)a0;
- (void)_incrementValueBy:(long long)a0;
- (void)_recordDistributionTime:(unsigned long long)a0;
- (void)_recordDistributionValue:(double)a0;
- (void)_removeChildStatistic:(id)a0;
- (void)_resetDistribution;
- (void)_resetDistributionToValue:(double)a0;
- (void)_resetValue;
- (BOOL)_shouldSample;
- (id)initWithDomain:(id)a0 identifierReporting:(long long)a1;
- (void)randomizeSampleValue;

@end
