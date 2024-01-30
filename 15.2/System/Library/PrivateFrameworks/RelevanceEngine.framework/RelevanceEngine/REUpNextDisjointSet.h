@class NSMapTable;

@interface REUpNextDisjointSet : NSObject <NSCopying> {
    NSMapTable *_nodes;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)connectItem:(id)a0 withItem:(id)a1;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (id)description;
- (id)allItemsConnectedToItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isItem:(id)a0 connectedToItem:(id)a1;
- (BOOL)containsItem:(id)a0;

@end
