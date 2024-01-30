@class ACHSyncingMonthlyChallengeTemplateCache, NSCalendar, NSString, NSObject, ACHMonthlyChallengeDataSource, NSDate, ACHMonthlyChallengeTemplateDataProvider;
@protocol ACHTemplateSourceDelegate;

@interface ACHMonthlyChallengeTemplateSource : NSObject <ACHTemplateSource> {
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
}

@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) ACHMonthlyChallengeDataSource *dataSource;
@property (retain, nonatomic) ACHMonthlyChallengeTemplateDataProvider *templateDataProvider;
@property (retain, nonatomic) ACHSyncingMonthlyChallengeTemplateCache *templateCache;
@property (nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)sourceShouldRunForDate:(id)a0;
- (void)templatesForDate:(id)a0 completion:(id /* block */)a1;
- (id)localizationBundleURLForTemplate:(id)a0;
- (id)resourceBundleURLForTemplate:(id)a0;
- (id)propertyListBundleURLForTemplate:(id)a0;
- (id)stickerBundleURLForTemplate:(id)a0;
- (void)templatesForDate:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (id)customPlaceholderValuesForTemplate:(id)a0;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (id)_modelsDirectoryBasePathForTemplate:(id)a0;
- (void)setCurrentDateOverride:(id)a0;
- (void)setCurrentCalendarOverride:(id)a0;
- (BOOL)_shouldOverrideMonthlyChallengeCadence;
- (BOOL)_isInFirstWeekOfCurrentMonth:(id)a0;
- (id)_dateComponentIntervalForCurrentMonth;
- (long long)_monthlyChallengeTemplateSourceActionForDate:(id)a0 existingTemplate:(id)a1;
- (BOOL)_createMonthlyChallengeWithMonthDateInterval:(id)a0 monthlyChallengeTemplates:(id *)a1 error:(id *)a2;
- (void)_removeMonthlyChallengeTemplate:(id)a0 monthlyChallengeTemplates:(id *)a1 templatesToRemove:(id *)a2;
- (void)_didOverrideMonthlyChallengeCadence;
- (unsigned long long)_getRandomMonthlyChallengeType;
- (double)_goalValueForCurrentMonthForType:(unsigned long long)a0;
- (id)_createMonthlyChallengeTemplateWithType:(unsigned long long)a0 dateCompoonentInterval:(id)a1 goalValue:(double)a2;
- (id)_suffixForCurrentMonthForType:(unsigned long long)a0 template:(id)a1;
- (id)_yearMonthStringFromTemplateName:(id)a0;
- (id)_dateComponentIntervalForLastMonth;
- (double)_targetGoalValueForCurrentMonthForType:(unsigned long long)a0;
- (id)_maximumValueForMonthlyChallengeType:(unsigned long long)a0;
- (BOOL)isGoalValueForMonthlyChallengeTypeValid:(unsigned long long)a0;
- (BOOL)isMonthlyChallengeOfTypeAvailable:(unsigned long long)a0;
- (id)_availableMonthlyChallengeTypes;
- (id)_dateComponentIntervalForTwoMonthsAgo;
- (double)_roundedGoalValue:(double)a0 monthlyChallengeType:(unsigned long long)a1;
- (id)possibleLocalizationSuffixesForTemplate:(id)a0;
- (unsigned long long)_numberOfDaysInMonthForDate:(id)a0;
- (id)initWithDataSource:(id)a0 dataProvider:(id)a1 templateCache:(id)a2;
- (BOOL)subObjectsHaveDatabaseAssertions;

@end
