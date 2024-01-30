@class TSCHTextCache, NSMapTable;

@interface TSCHTextCacheMap : NSObject {
    TSCHTextCache *_mainCache;
    NSMapTable *_map;
}

- (void)clear;
- (void).cxx_destruct;
- (id)init;
- (id)textCacheForStyleProvidingSource:(id)a0;

@end
