@class NSMutableDictionary, NSMutableOrderedSet;

@interface PPQuickTypeItemCache : NSObject {
    NSMutableOrderedSet *_keys;
    NSMutableDictionary *_entries;
}

- (void).cxx_destruct;
- (id)init;
- (void)setEntry:(id)a0 key:(id)a1;

@end
