@class NSMutableArray;

@interface NMSMutableItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSMutableArray *_items;
    unsigned long long _itemIndex;
}

- (void)addItem:(id)a0;
- (BOOL)hasItems;
- (id)init;
- (id)nextItem;
- (void).cxx_destruct;

@end
