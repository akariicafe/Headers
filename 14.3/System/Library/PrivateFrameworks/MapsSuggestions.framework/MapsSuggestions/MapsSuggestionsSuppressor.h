@class NSString, NSMutableDictionary, MapsSuggestionsQueue;

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {
    NSMutableDictionary *_suppressionEntries;
    NSString *_suppressionEntriesFilePath;
    MapsSuggestionsQueue *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (BOOL)isSuppressedEntry:(id)a0;
- (BOOL)saveSuppressedEntries;
- (BOOL)suppressEntry:(id)a0 forTime:(double)a1;
- (void)awaitQueue;
- (BOOL)loadSuppressedEntries;
- (void)test_deleteSuppressedEntriesFile;
- (id)test_dateUntilSuppressedEntry:(id)a0;

@end
