@protocol WBSDictionaryKeyValueStore;

@interface WBSForYouDataSourceWeightManager : NSObject {
    id<WBSDictionaryKeyValueStore> _store;
}

- (void)clear;
- (void).cxx_destruct;
- (void)downvoteSource:(unsigned long long)a0;
- (double)weightForSource:(unsigned long long)a0;
- (id)initWithKeyValueStore:(id)a0;

@end
