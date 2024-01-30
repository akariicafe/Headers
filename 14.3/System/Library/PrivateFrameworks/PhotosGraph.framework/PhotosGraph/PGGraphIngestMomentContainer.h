@class PGManager, CLSInvestigationPhotoKitFeeder, NSString, NSDate, NSNumber, CLSClueCollection;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment>

@property (retain, nonatomic) CLSClueCollection *clueCollection;
@property (retain, nonatomic) CLSInvestigationPhotoKitFeeder *feeder;
@property (retain, nonatomic) NSNumber *isInterestingNumber;
@property (retain, nonatomic) NSNumber *isInterestingWithAlternateJunkingNumber;
@property (retain, nonatomic) NSNumber *isSmartInterestingNumber;
@property (retain, nonatomic) NSNumber *contentScoreNumber;
@property (retain, nonatomic) PGManager *manager;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) BOOL isSmartInteresting;
@property (readonly, nonatomic) BOOL isInteresting;
@property (readonly, nonatomic) BOOL isInterestingWithAlternateJunking;
@property (readonly, nonatomic) double contentScore;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) unsigned long long numberOfItemsWithPersons;
@property (readonly, nonatomic) unsigned long long totalNumberOfPersons;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) double inhabitationScore;
@property (readonly, nonatomic) BOOL hasHigherThanImprovedAssets;
@property (readonly, nonatomic) BOOL hasAssetsWithInterestingScenes;
@property (readonly, nonatomic) BOOL containsBetterScoringAsset;
@property (readonly, nonatomic) BOOL containsNonJunkAssets;
@property (readonly, nonatomic) unsigned long long numberOfShinyGemItems;
@property (readonly, nonatomic) unsigned long long numberOfRegularGemItems;
@property (readonly, nonatomic) double behavioralScore;
@property (readonly, nonatomic) double scenesProcessedRatio;
@property (readonly, nonatomic) double facesProcessedRatio;
@property (readonly, nonatomic) unsigned long long numberOfAssetsInExtendedCuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initMomentContainerWithFeeder:(id)a0 clueCollection:(id)a1 manager:(id)a2;
- (void).cxx_destruct;
- (void)_computeScoresIfNeeded;

@end
