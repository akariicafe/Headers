@class TSCHTextCache, NSMapTable;

@interface TSCHTextCacheMap : NSObject {
    TSCHTextCache *_mainCache;
    NSMapTable *_map;
}

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)textCacheForStyleProvidingSource:(id)a0;

@end
