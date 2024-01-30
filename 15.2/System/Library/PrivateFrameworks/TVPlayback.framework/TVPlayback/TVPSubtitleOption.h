@class AVMediaSelectionOption, NSString, NSNumber;

@interface TVPSubtitleOption : NSObject

@property (retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption;
@property (copy, nonatomic) NSString *languageCodeFromLocale;
@property (copy, nonatomic) NSString *languageCodeBCP47;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedDisplayString;
@property (retain, nonatomic) NSNumber *cachedContainsOnlyForcedSubtitles;
@property (retain, nonatomic) NSNumber *cachedSubtitleType;
@property (readonly, nonatomic) BOOL containsOnlyForcedSubtitles;
@property (readonly, nonatomic) long long subtitleType;

+ (id)offSubtitleOption;
+ (id)autoSubtitleOption;
+ (id)offSubtitleOptionWithAVMediaSelectionOption:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_currentLocaleDidChange:(id)a0;
- (id)initWithAVMediaSelectionOption:(id)a0;

@end
