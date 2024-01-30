@interface MiroContentFiltering : NSObject

+ (id)liveValueForKey:(id)a0;
+ (int)minimumDurationToFilter;
+ (int)maxiumumDurationToSendAll;
+ (int)minimumScoreAllowedAsBRoll;
+ (int)minimumScoreAllowed;
+ (double)bRollAdjustPercentageDefault;
+ (double)bRollAdjustPercentageSlow;
+ (double)bRollAdjustPercentageMedium;
+ (double)bRollAdjustPercentageFast;
+ (double)bRollAdjustForRequiredBRollPercentage;
+ (int)assumedPhotoDuration;
+ (double)videoTooShortInSeconds;
+ (double)postSelectionDupeTestDurationInSeconds;
+ (double)sloMoClusterTimeDurationInSeconds;
+ (double)addBackMoreAfterDurationInSecondsFast;
+ (double)addBackMoreAfterDurationInSecondsMedium;
+ (double)addBackMoreAfterDurationInSecondsSlow;
+ (int)clusterCountToTrim;
+ (int)clusterTooLargeTrim;
+ (double)shootingRatioMinBestDuration;
+ (double)shootingRatioSmallSetRatio;
+ (double)shootingRatioMaxDurationRatioAbove;
+ (double)shootingRatioMaxOverSuggestedMultiplier;
+ (double)shootingRatioMaxDurationRatioBelow;
+ (int)endingGroupingCount;
+ (int)minCountToAllowEndGrouping;

@end
