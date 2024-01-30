@class ACHAchievement, AAUIAchievementLocalizationProvider;

@interface AAUIAchievementFormatter : NSObject

@property (retain, nonatomic) ACHAchievement *achievement;
@property (retain, nonatomic) AAUIAchievementLocalizationProvider *locProvider;
@property (nonatomic) long long style;
@property (nonatomic) BOOL formatsForFriend;

- (void).cxx_destruct;
- (id)titleAttributes;
- (id)descriptionAttributes;
- (BOOL)shouldShowEarnedShortDescription;
- (id)backsideAttributesWithSizeVariant:(long long)a0;
- (id)localizedAttributedBacksideStringWithDateSizeVariant:(long long)a0;
- (id)initWithStyle:(long long)a0 achievement:(id)a1 localizationProvider:(id)a2;
- (id)localizedAttributedCombinedString;
- (id)localizedAttributedTitleString;
- (id)localizedAttributedDescriptionString;
- (id)localizedAttributedShortDescriptionString;
- (id)localizedAttributedBacksideString;
- (id)localizedAttributedShortenedBacksideString;

@end
