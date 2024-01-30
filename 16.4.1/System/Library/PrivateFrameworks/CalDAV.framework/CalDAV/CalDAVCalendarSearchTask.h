@class NSDictionary, NSArray, NSString;

@interface CalDAVCalendarSearchTask : CoreDAVTask {
    NSArray *_languages;
    NSString *_location;
    NSString *_calendarType;
    unsigned long long _limit;
    NSDictionary *_additionalAuthenticationHeaders;
}

@property (readonly, retain, nonatomic) NSDictionary *urlsToResults;

- (id)requestBody;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)setLimit:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithLanguages:(id)a0 location:(id)a1 calendarType:(id)a2 url:(id)a3;
- (void)setAdditionalAuthenticationHeaders:(id)a0;

@end
