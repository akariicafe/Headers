@class NSArray;

@interface HROnboardingSequence : NSObject

@property (readonly, nonatomic) NSArray *pages;

+ (id)firstTimeAtrialFibrillationAvailabilitySequence;
+ (id)firstTimeAtrialFibrillationOnboardingSequence;
+ (id)firstTimeElectrocardiogramAvailabilitySequence;
+ (id)upgradingElectrocardiogramAvailabilitySequence;
+ (id)firstTimeElectrocardiogramOnboardingSequenceWithAlgorithmVersion:(long long)a0;
+ (id)upgradingElectrocardiogramSequenceFromAlgorithmVersion:(long long)a0 toAlgorithmVersion:(long long)a1;

- (void).cxx_destruct;
- (id)_initWithPages:(id)a0;

@end
