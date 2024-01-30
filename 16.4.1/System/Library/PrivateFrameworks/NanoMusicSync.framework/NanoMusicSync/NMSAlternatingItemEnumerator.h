@class NSMutableArray;

@interface NMSAlternatingItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSMutableArray *_itemEnumerators;
    unsigned long long _itemEnumeratorIndex;
}

- (id)nextItem;
- (void).cxx_destruct;
- (id)initWithItemEnumerators:(id)a0;

@end
