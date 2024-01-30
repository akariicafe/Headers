@class MapsSuggestionsPortrait, NSString, NSArray, NSDate, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {
    NSDate *_fetchEntriesFromDate;
    NSArray *_portraitData;
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

- (void)preLoad;
- (id).cxx_construct;
- (char)relevanceScoreForNames:(id)a0 addresses:(id)a1 mapItems:(id)a2 completion:(id /* block */)a3;
- (id)initWithPortrait:(id)a0;
- (void).cxx_destruct;

@end
