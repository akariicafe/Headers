@class PPDecayedFeedbackCounts, NSDate, NSMutableArray, PPSourceStats;

@interface PPMutableFeaturedItem : NSObject {
    unsigned short _countForAlgorithm[16];
    unsigned short _countForNECategory[20];
    unsigned short _rankCount[5];
}

@property (readonly, nonatomic) unsigned long long uniqueAlgorithmCount;
@property (readonly, nonatomic) unsigned long long uniqueNamedEntityCategoryCount;
@property (readonly, nonatomic) float maxScore;
@property (readonly, nonatomic) float minScore;
@property (readonly, nonatomic) float meanScore;
@property (readonly, nonatomic) float meanScoreWithOutliersRemoved;
@property (readonly, nonatomic) float varianceScoreWithOutliersRemoved;
@property (readonly, nonatomic) float sumDwellTimeInHours;
@property (readonly, nonatomic) float recordCount;
@property (readonly, nonatomic) unsigned int exactMatchInSourceTextCount;
@property (readonly, nonatomic) BOOL userCreated;
@property (readonly, nonatomic) unsigned long long uniqueOsBuildCount;
@property (readonly, nonatomic) unsigned long long uniqueAssetVersionCount;
@property (readonly, nonatomic) unsigned long long uniqueBundleIdCount;
@property (readonly, nonatomic) unsigned int countInMobileMail;
@property (readonly, nonatomic) unsigned int countInSafari;
@property (readonly, nonatomic) unsigned int countInMail;
@property (readonly, nonatomic) unsigned int countInMobileSafari;
@property (readonly, nonatomic) unsigned int countInMobileSlideShow;
@property (readonly, nonatomic) unsigned int countInMobileSMS;
@property (readonly, nonatomic) unsigned int countInChat;
@property (readonly, nonatomic) unsigned int countInNews;
@property (readonly, nonatomic) unsigned int countInMaps;
@property (readonly, nonatomic) unsigned int countInMobileCal;
@property (readonly, nonatomic) unsigned int countInCoreRoutine;
@property (readonly, nonatomic) unsigned int countInYelp;
@property (readonly, nonatomic) unsigned int countInMusic;
@property (readonly, nonatomic) unsigned int countInCal;
@property (readonly, nonatomic) unsigned int countInWebKit;
@property (readonly, nonatomic) unsigned int countInYoutube;
@property (readonly, nonatomic) unsigned int countInReminders;
@property (readonly, nonatomic) unsigned int countInMobileNotes;
@property (readonly, nonatomic) unsigned int countInSpotify;
@property (readonly, nonatomic) unsigned int countInNotes;
@property (readonly, nonatomic) unsigned int countInPodcast;
@property (readonly, nonatomic) unsigned int countInNetflix;
@property (readonly, nonatomic) unsigned long long uniqueGroupIdCount;
@property (readonly, nonatomic) unsigned long long uniqueSourceHourCount;
@property (readonly, nonatomic) NSMutableArray *countInHour;
@property (readonly, nonatomic) unsigned long long uniqueSourceDayOfWeekCount;
@property (readonly, nonatomic) float meanInterArrivalHour;
@property (readonly, nonatomic) float varianceInterArrivalHour;
@property (readonly, nonatomic) float meanSourceDateInHours;
@property (readonly, nonatomic) float varianceSourceDateInHours;
@property (readonly, nonatomic) float timeSpanInHours;
@property (readonly, nonatomic) float timeElapsedInHours;
@property (readonly, nonatomic) float relativeTimeToRelevanceDate;
@property (readonly, nonatomic) float decayedSum;
@property (readonly, nonatomic) float decayRate;
@property (readonly, nonatomic) BOOL strictFiltering;
@property (readonly, nonatomic) NSDate *scoringDate;
@property (readonly, nonatomic) PPSourceStats *sourceStats;
@property (readonly, nonatomic) unsigned long long namedEntityCharacterLength;
@property (readonly, nonatomic) BOOL matchesPrimaryLanguage;
@property (readonly, nonatomic) PPDecayedFeedbackCounts *decayedFeedbackCounts;
@property (readonly, nonatomic) unsigned long long sumLengthSeconds;
@property (readonly, nonatomic) unsigned long long sumLengthCharacters;
@property (readonly, nonatomic) unsigned long long sumDonationCount;
@property (readonly, nonatomic) unsigned long long sumContactHandleCount;

- (void)updateSpecializedFeaturesNamedEntity:(id)a0;
- (id)computeModelScoreAndReturnFeaturesWithScoreInterpreter:(id)a0;
- (void).cxx_destruct;
- (id)initWithMutableAggregatedItem:(id)a0 scoringDate:(id)a1 decayRate:(float)a2 sourceStats:(id)a3 decayedFeedbackCounts:(id)a4 strictFiltering:(BOOL)a5;
- (id /* block */)inputInitializationBlock;
- (id /* block */)inputAssignmentBlock;
- (float)computeModelScoreWithScoreInterpreter:(id)a0;

@end
