@class NSObject, NSLocale, NSArray, NSURL, NSDate, QPDataDetectorsParser;
@protocol OS_dispatch_queue;

@interface QPQueryParserManager : NSObject {
    void *_parser;
    QPDataDetectorsParser *_dateParser;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_originalDate;
    NSLocale *_originalLocale;
    NSArray *_originalPreferredLocales;
    NSURL *_originalCustomResourceDirectory;
}

@property (class, readonly) QPQueryParserManager *defaultManager;

+ (id)availableLanguages;
+ (id)remindersParserManager;
+ (id)spotlightManager;
+ (id)photosParserManager;
+ (id)notesManager;

- (BOOL)available;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)enumerateParseResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)updateWithOptions:(id)a0;
- (id)dateFromParseAttributes:(id)a0;
- (void)enumerateDateParseResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateSpotlightResultsForString:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateParseResultsForStartDateString:(id)a0 startDateContext:(id)a1 endDateString:(id)a2 endDateContext:(id)a3 options:(id)a4 withBlock:(id /* block */)a5;

@end
