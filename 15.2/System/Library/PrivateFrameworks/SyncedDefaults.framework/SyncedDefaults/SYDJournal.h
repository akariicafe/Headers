@class NSMutableDictionary;

@interface SYDJournal : NSObject {
    NSMutableDictionary *_store;
    NSMutableDictionary *_journal;
    BOOL _readonly;
}

- (id)initWithStore:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)changesSinceChangeCount:(long long)a0;
- (long long)maximumChangeCount;
- (id)initWithMutableStore:(id)a0;
- (void)addChange:(int)a0 forKey:(id)a1 changeCount:(long long)a2;
- (int)changeSinceChangeCount:(long long)a0 forKey:(id)a1;
- (BOOL)removeChangesUntilChangeCount:(long long)a0;

@end
