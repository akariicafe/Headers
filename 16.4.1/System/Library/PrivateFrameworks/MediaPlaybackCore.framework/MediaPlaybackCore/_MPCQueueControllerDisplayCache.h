@class NSString, NSMapTable;

@interface _MPCQueueControllerDisplayCache : NSObject

@property (copy, nonatomic) NSString *furthestContentItemID;
@property (retain, nonatomic) NSMapTable *itemCache;
@property (retain, nonatomic) NSMapTable *indexCache;
@property (nonatomic) long long displayItemCount;

- (id)init;
- (void).cxx_destruct;
- (id)itemEnumerator;
- (void)clearIndexCache;
- (void)clearItemCache;
- (long long)displayIndexForContentItemID:(id)a0;
- (id)itemForContentItemID:(id)a0;
- (void)setDisplayIndex:(long long)a0 forContentItemID:(id)a1;
- (void)setItem:(id)a0 forContentItemID:(id)a1;

@end
