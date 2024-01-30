@class NSString, NSCalendar, NSDate, FIUIUnitManager;

@interface AAUIAchievementLocalizationProvider : NSObject

@property (retain, nonatomic) NSDate *currentDateOverride;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL wheelchairUser;
@property (nonatomic) long long activityMoveMode;
@property (retain, nonatomic) FIUIUnitManager *unitManager;

- (id)currentDate;
- (id)init;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0 withAchievement:(id)a1 experienceType:(unsigned long long)a2;
- (id)titleForAchievement:(id)a0;
- (id)unachievedAlertBackDescriptionForAchievement:(id)a0;
- (id)_backDateStringForDate:(id)a0 achievement:(id)a1 dateStyle:(unsigned long long)a2;
- (id)_localizedStringWithKey:(id)a0 withAchievement:(id)a1 experienceType:(unsigned long long)a2;
- (id)_localizedStringWithKey:(id)a0 withAchievement:(id)a1 localizationBundleURL:(id)a2 experienceType:(unsigned long long)a3;
- (id)_suffixesForLocalizedStringLookup;
- (id)_allStringCombinationsWithPrefix:(id)a0 andSuffixes:(id)a1;
- (id)_pluralizeLocalizedString:(id)a0 withAchievement:(id)a1;
- (id)_replacePlaceholdersInString:(id)a0 withAchievement:(id)a1;
- (id)_buildKeyWithKeyBaseString:(id)a0 andSuffixes:(id)a1;
- (id)_valueFromPlaceholder:(id)a0 withAchievement:(id)a1;
- (id)_stringByTrimmingPlaceholderMarkersFromString:(id)a0;
- (id)_formatValue:(id)a0 usingFormatterNamed:(id)a1 template:(id)a2;
- (id)_progressValueWithAchievement:(id)a0;
- (id)_achievementValueWithAchievement:(id)a0;
- (id)_goalValueWithAchievement:(id)a0;
- (id)_quantityToGoalValueWithAchievement:(id)a0;
- (id)_formattedEnergyValue:(id)a0 canonicalUnit:(id)a1;
- (id)_formattedMoveTimeValue:(id)a0;
- (id)_formattedMoveGoal:(id)a0 template:(id)a1;
- (id)_userEnergyUnitSuffix;
- (id)_calculateSuffixCombinations:(id)a0;
- (id)_remainingProgressValueWithUnit:(id)a0 achievement:(id)a1;
- (id)unachievedDescriptionForAchievement:(id)a0;
- (id)unachievedShortDescriptionForAchievement:(id)a0;
- (id)achievedDescriptionForAchievement:(id)a0;
- (id)achievedShortDescriptionForAchievement:(id)a0;
- (id)friendAchievedTitleForAchievement:(id)a0;
- (id)friendAchievedDescriptionForAchievement:(id)a0;
- (id)achievedAlertDescriptionForAchievement:(id)a0 experienceType:(unsigned long long)a1;
- (id)achievedAlertBackDescriptionForAchievement:(id)a0 sizeVariant:(long long)a1 dateSizeVariant:(long long)a2;
- (id)unachievedAlertDescriptionForAchievement:(id)a0 experienceType:(unsigned long long)a1;
- (id)shareDescriptionForAchievement:(id)a0;
- (id)_buildKeyWithKeyBaseString:(id)a0;

@end
