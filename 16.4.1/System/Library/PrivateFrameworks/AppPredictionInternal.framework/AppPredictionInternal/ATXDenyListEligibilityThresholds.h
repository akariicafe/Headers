@class NSNumber, NSDictionary;

@interface ATXDenyListEligibilityThresholds : NSObject {
    NSDictionary *asset;
    NSDictionary *_lowestScoreForAppInAnotherModeForDenyListEligibility;
    NSDictionary *_highestScoreForAppInCurrentModeForDenyListEligibility;
    NSNumber *_defaultLowestScoreForAppInAnotherModeForDenyListEligibility;
    NSNumber *_defaultHighestScoreForAppInCurrentModeForDenyListEligibility;
}

@property (retain, nonatomic) NSNumber *lowestContactScoreInAnotherModeForDenyListEligibility;
@property (retain, nonatomic) NSNumber *highestContactScoreInCurrentModeForDenyListEligibility;

- (id)init;
- (void).cxx_destruct;
- (id)highestScoreInCurrentModeForDenyListEligibilityForBundleId:(id)a0;
- (id)lowestScoreInAnotherModeForDenyListEligibilityForBundleId:(id)a0;

@end
