@class NSString;

@interface HKSpokenLanguage : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *languageInCurrentLocale;
@property (retain, nonatomic) NSString *languageInLanguageLocale;
@property unsigned long long languageCategoryType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithLanguageIdentifier:(id)a0 forCategory:(unsigned long long)a1;
- (id)localizedStringForDisplay;

@end
