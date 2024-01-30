@class NSMutableDictionary;

@interface SYDJournal : NSObject {
    NSMutableDictionary *_store;
    NSMutableDictionary *_journal;
    BOOL _readonly;
}

- (id)initWithStore:(id)a0;
- (int)changeSinceChangeCount:(long long)a0 forKey:(id)a1;
- (id)initWithMutableStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeChangesUntilChangeCount:(long long)a0;
- (id)changesSinceChangeCount:(long long)a0;
- (long long)maximumChangeCount;
- (id)description;
- (void)addChange:(int)a0 forKey:(id)a1 changeCount:(long long)a2;

@end
