@class CSSearchableIndex;

@interface INRelevantShortcutStore : NSObject

@property (class, readonly) INRelevantShortcutStore *defaultStore;

@property (readonly, nonatomic) CSSearchableIndex *index;

- (void)setRelevantShortcuts:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSearchableIndex:(id)a0;
- (void).cxx_destruct;

@end
