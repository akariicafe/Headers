@class NSDictionary, NSArray, NSString;

@interface CalDAVCalendarSearchTask : CoreDAVTask {
    NSArray *_languages;
    NSString *_location;
    NSString *_calendarType;
}

@property (readonly, retain, nonatomic) NSDictionary *urlsToResults;

- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithLanguages:(id)a0 location:(id)a1 calendarType:(id)a2 url:(id)a3;

@end
