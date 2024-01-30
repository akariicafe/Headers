@class MapsSuggestionsPortrait, NSString, NSArray, NSDate, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {
    NSDate *_fetchEntriesFromDate;
    NSArray *_portraitStrings;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSLocale *_currentLocale;
    NSString *_languageCode;
    NSString *_currentCountryCode;
    MapsSuggestionsPortrait *_portrait;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPortrait:(id)a0;
- (id).cxx_construct;
- (void)preLoad;
- (char)relevanceScoreForNames:(id)a0 addresses:(id)a1 mapItems:(id)a2 completion:(id /* block */)a3;

@end
