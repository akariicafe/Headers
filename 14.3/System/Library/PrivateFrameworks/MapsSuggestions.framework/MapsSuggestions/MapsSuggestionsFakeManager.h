@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MapsSuggestionsFakeManager : NSObject <MapsSuggestionsSourceDelegate> {
    struct ReadWriteQueue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _readwrite;
    NSMutableArray *_allCurrentEntries;
    NSMutableDictionary *_currentEntriesPerSource;
    NSObject<OS_dispatch_semaphore> *_sema;
}

@property (readonly, retain) NSMutableArray *allCurrentEntries;
@property (readonly, retain) NSMutableDictionary *currentEntriesPerSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)waitWithTimeout:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepareWait;
- (unsigned long long)addOrUpdateSuggestionEntries:(id)a0 source:(id)a1;
- (BOOL)detachSource:(id)a0;
- (BOOL)attachSource:(id)a0;
- (id).cxx_construct;

@end
