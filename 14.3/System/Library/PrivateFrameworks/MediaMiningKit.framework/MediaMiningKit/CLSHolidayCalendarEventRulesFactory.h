@interface CLSHolidayCalendarEventRulesFactory : NSObject

+ (id)_loadManifestFromBaseURL:(id)a0;
+ (id)_eventRulesDictionariesForURL:(id)a0;
+ (id)eventRulesForLocale:(id)a0 sourcesURL:(id)a1;
+ (id)_eventRulesFileDictionaryForURL:(id)a0 error:(id *)a1;
+ (id)_eventRulesURLForCountryCode:(id)a0 baseURL:(id)a1;
+ (id)eventRulesForLocale:(id)a0;
+ (id)_baseURL;

@end
