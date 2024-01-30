@class ACHAchievement, AAUIAchievementLocalizationProvider;

@interface AAUIAchievementFormatter : NSObject

@property (retain, nonatomic) ACHAchievement *achievement;
@property (retain, nonatomic) AAUIAchievementLocalizationProvider *locProvider;
@property (nonatomic) long long style;
@property (nonatomic) BOOL formatsForFriend;

- (id)titleAttributes;
- (void).cxx_destruct;
- (id)backsideAttributesWithSizeVariant:(long long)a0;
- (id)descriptionAttributes;
- (id)initWithStyle:(long long)a0 achievement:(id)a1 localizationProvider:(id)a2;
- (id)localizedAttributedBacksideString;
- (id)localizedAttributedBacksideStringWithDateSizeVariant:(long long)a0;
- (id)localizedAttributedCombinedString;
- (id)localizedAttributedCombinedStringShowingProgress:(BOOL)a0;
- (id)localizedAttributedCombinedStringWithoutProgress;
- (id)localizedAttributedDescriptionString;
- (id)localizedAttributedShortDescriptionString;
- (id)localizedAttributedShortenedBacksideString;
- (id)localizedAttributedTitleString;
- (BOOL)shouldShowEarnedShortDescription;

@end
