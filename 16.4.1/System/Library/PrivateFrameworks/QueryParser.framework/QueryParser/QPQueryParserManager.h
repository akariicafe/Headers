@class NSObject, NSDate, NSArray, NSURL, NSLocale, QPDataDetectorsParser;
@protocol OS_dispatch_queue;

@interface QPQueryParserManager : NSObject {
    void *_parser;
    QPDataDetectorsParser *_dateParser;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _modelIsLoaded;
    NSLocale *_currentLocale;
    NSDate *_originalDate;
    NSLocale *_originalLocale;
    NSArray *_originalPreferredLocales;
    NSURL *_originalCustomResourceDirectory;
}

@property (class, readonly) QPQueryParserManager *defaultManager;

+ (id)availableLanguages;
+ (id)remindersParserManager;
+ (id)spotlightManager;
+ (id)notesManager;
+ (id)photosParserManager;

- (BOOL)available;
- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)enumerateParseResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)updateWithOptions:(id)a0;
- (id)dateFromParseAttributes:(id)a0;
- (void)enumerateDateParseResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateParseResultsForStartDateString:(id)a0 startDateContext:(id)a1 endDateString:(id)a2 endDateContext:(id)a3 options:(id)a4 withBlock:(id /* block */)a5;
- (void)enumerateSpotlightResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;

@end
