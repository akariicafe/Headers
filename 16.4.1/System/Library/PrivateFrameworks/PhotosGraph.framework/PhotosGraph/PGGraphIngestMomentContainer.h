@class PGCurationManager, CLSInvestigationPhotoKitFeeder, NSString, CLSCurationContext, NSDate, NSNumber, CLSClueCollection;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment> {
    PGCurationManager *_curationManager;
    double _topTierAestheticScore;
}

@property (retain, nonatomic) CLSClueCollection *clueCollection;
@property (retain, nonatomic) CLSInvestigationPhotoKitFeeder *feeder;
@property (retain, nonatomic) NSNumber *isInterestingNumber;
@property (retain, nonatomic) NSNumber *isInterestingWithAlternateJunkingNumber;
@property (retain, nonatomic) NSNumber *isSmartInterestingNumber;
@property (retain, nonatomic) NSNumber *contentScoreNumber;
@property (retain, nonatomic) CLSCurationContext *curationContext;
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
@property (readonly, nonatomic) unsigned short sharingComposition;
@property (readonly, nonatomic) BOOL happensAtSensitiveLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
