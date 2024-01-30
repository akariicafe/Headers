@class NSMutableArray, NSMutableDictionary;

@interface OKSettingsTransaction : NSObject {
    NSMutableDictionary *_itemsByKey;
}

@property (readonly, retain, nonatomic) NSMutableArray *items;

- (id)init;
- (void)dealloc;
- (void)mergeWithTransaction:(id)a0;
- (void)registerTransactionItem:(id)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forKey:(id)a1;

@end
