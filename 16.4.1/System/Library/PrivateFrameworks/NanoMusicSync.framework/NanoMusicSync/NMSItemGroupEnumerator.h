@class NSArray, NMSMediaItemGroup;

@interface NMSItemGroupEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NMSMediaItemGroup *_itemGroup;
    NSArray *_itemList;
    unsigned long long _itemIndex;
}

- (id)nextItem;
- (void).cxx_destruct;
- (id)initWithItemGroup:(id)a0;

@end
