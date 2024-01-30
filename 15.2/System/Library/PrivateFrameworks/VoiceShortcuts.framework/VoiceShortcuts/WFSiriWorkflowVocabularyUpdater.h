@class WFDebouncer, NSOrderedSet, NSObject;
@protocol OS_dispatch_queue, WFDatabaseProvider;

@interface WFSiriWorkflowVocabularyUpdater : NSObject <WFDatabaseObjectObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFDebouncer *debouncer;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (copy, nonatomic) NSOrderedSet *speakableStrings;

- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void)queue_updateIfNeeded;
- (void)startIfPossible;
- (void)queue_startIfPossible;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1;
- (void)applicationWasRegistered:(id)a0;
- (void).cxx_destruct;
- (void)assistantPreferencesDidChange;
- (void)updateIfPossible;

@end
