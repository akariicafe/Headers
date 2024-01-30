@class NSMutableArray;

@interface IntlUtility : NSObject {
    NSMutableArray *mBidiLanguagesArray;
    NSMutableArray *mBidiTestedLanguagesArray;
}

+ (void)unsubscribeFromAppLanguageChanges;
+ (id)numberingSystemsForLocaleID:(id)a0;
+ (id)stdLanguageIDs;
+ (BOOL)isYearlessDate:(id)a0 forCalendar:(id)a1;
+ (long long)yearlessYearForMonth:(long long)a0 withCalendar:(id)a1;
+ (id)preferredLanguagesForRegion:(id)a0;
+ (id)defaultNumberingSystemForLocaleID:(id)a0;
+ (id)normalizedLanguageIDFromString:(id)a0;
+ (id)perAppLanguageSelectionBundleIdentifiers;
+ (long long)formattingContextFromIUDisplayNameContext:(unsigned long long)a0;
+ (id)preferredLanguageForBundleID:(id)a0;
+ (id)preferredLanguagesForRegionWithoutFiltering:(id)a0;
+ (id)numberingSystemForLocaleID:(id)a0;
+ (BOOL)upgradeAppleLanguagesFrom:(id)a0 to:(id)a1;
+ (int)UDisplayContextForIUDisplayNameContext:(unsigned long long)a0;
+ (id)baseSystemLanguages;
+ (id)numberingSystemsFromArray:(id)a0 forLocaleID:(id)a1;
+ (id)shortDisplayNameForNumberingSystemWithIdentifier:(id)a0 localeIdentifier:(id)a1;
+ (id)displayNameForNumberingSystemWithIdentifier:(id)a0 localeIdentifier:(id)a1 short:(BOOL)a2;
+ (id)localeForCalendarID:(id)a0 andLocale:(id)a1;
+ (id)baseLanguageIdentifierFromIdentifier:(id)a0;
+ (void)setPreferredLanguage:(id)a0 forBundleID:(id)a1;
+ (id)_proposedOverrideLanguageFromLanguage:(id)a0 forLocalizations:(id)a1 preferredLanguages:(id)a2 regionCode:(id)a3;
+ (id)displayNameForNumberingSystemWithIdentifier:(id)a0 localeIdentifier:(id)a1;
+ (void)preferredLanguagesForBundleID:(id)a0 reply:(id /* block */)a1;
+ (BOOL)isLunarCalendarDefaultOnForLanguage:(id)a0 locale:(id)a1;
+ (id)_preferredLanguagesForBundleID:(id)a0;
+ (void)setYearlessYear:(id)a0 forCalendar:(id)a1;
+ (id)capitalizeFirstWordOfName:(id)a0 accordingToLanguage:(id)a1;
+ (BOOL)forceCapitalizationInLanguageLists;
+ (id)restrictedCountryCodes;
+ (void)enumeratePreferredCalendarsForLocaleID:(id)a0 usingBlock:(id /* block */)a1;
+ (id)parentLocaleIdentifierForIdentifier:(id)a0;
+ (id)localeForCalendarID:(id)a0;
+ (id)preferredLunarCalendarForLocaleID:(id)a0;
+ (id)lunarCalendarsForLocaleID:(id)a0;
+ (id)languageIdentifierFromIdentifier:(id)a0 withRegion:(id)a1;
+ (void)setPreferredLanguage:(id)a0 forBundleID:(id)a1 andRelaunchWithCompletion:(id /* block */)a2;
+ (id)preferredLanguagesForBundleIDs:(id)a0;
+ (id)sharedIntlUtility;
+ (void)_setPreferredLanguage:(id)a0 forBundleID:(id)a1;
+ (id)preferredLanguagesFromLanguages:(id)a0 byAddingFallbacksForRegion:(id)a1;
+ (id)_preferredLanguagesForBundleID:(id)a0 withAppProxy:(id)a1;
+ (id)defaultCalendarForLocaleID:(id)a0;
+ (id)alternateContinentOfRegion:(id)a0;
+ (BOOL)isLunarCalendarDefaultOn;
+ (void)subscribeToAppLanguageChanges:(id /* block */)a0;
+ (id)_getXPCConnectionForLocalizationSwitcher;
+ (void)preferredLanguagesForBundleIDs:(id)a0 reply:(id /* block */)a1;
+ (id)supportedCalendars;
+ (id)filterLanguageList:(id)a0 forRegion:(id)a1 fromLanguages:(id)a2;

- (void).cxx_destruct;
- (id)displayNameForRegion:(id)a0 displayLanguage:(id)a1 capitalization:(unsigned long long)a2;
- (id)ICUdisplayNameForLanguage:(id)a0 capitalization:(struct ULocaleDisplayNames { } *)a1;
- (id)displayNameForLanguage:(id)a0 context:(unsigned long long)a1 displayLanguage:(id)a2;
- (id)displayNameForRegion:(id)a0 displayLanguage:(id)a1 capitalization:(unsigned long long)a2 short:(BOOL)a3;
- (id)displayNameForLabelForLunarCalendarID:(id)a0 displayLanguage:(id)a1;
- (id)languageList;
- (id)displayNameForDialect:(id)a0 context:(unsigned long long)a1 displayLanguage:(id)a2;
- (id)displayNameForLocale:(id)a0 displayLanguage:(id)a1 capitalization:(unsigned long long)a2 short:(BOOL)a3;
- (BOOL)canRenderLanguage:(id)a0;
- (id)localizedNameForScript:(short)a0;
- (id)localizedLanguageForLanguage:(id)a0;
- (id)displayNameForNormalizedLanguage:(id)a0 context:(unsigned long long)a1 displayLanguage:(id)a2;

@end
