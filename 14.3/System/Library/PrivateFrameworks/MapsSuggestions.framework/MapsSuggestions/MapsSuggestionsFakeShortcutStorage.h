@class NSString, NSArray, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsFakeShortcutStorage : NSObject <MapsSuggestionsShortcutStorage> {
    struct ReadWriteQueue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _rwQueue;
    NSArray *_fakeResults;
    NSArray *_passedInput;
    NSError *_fakeError;
    unsigned long long _calledLoad;
    unsigned long long _calledAddOrUpdate;
    unsigned long long _calledRemove;
    unsigned long long _calledMove;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setChangeHandler:(id /* block */)a0;
- (char)moveShortcut:(id)a0 beforeShortcut:(id)a1 handler:(id /* block */)a2;
- (char)removeShortcuts:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)configureResults:(id)a0;
- (char)moveShortcut:(id)a0 afterShortcut:(id)a1 handler:(id /* block */)a2;
- (void)reset;
- (char)moveShortcutToFront:(id)a0 handler:(id /* block */)a1;
- (id)passedInput;
- (unsigned long long)calledRequestLoad;
- (unsigned long long)calledRemove;
- (unsigned long long)calledAddOrUpdate;
- (unsigned long long)calledMove;
- (char)addOrUpdateShortcuts:(id)a0 handler:(id /* block */)a1;
- (char)moveShortcut:(id)a0 toIndex:(long long)a1 handler:(id /* block */)a2;
- (id).cxx_construct;
- (char)loadAllShortcutsWithHandler:(id /* block */)a0;
- (void)configureError:(id)a0;
- (char)moveShortcutToBack:(id)a0 handler:(id /* block */)a1;

@end
