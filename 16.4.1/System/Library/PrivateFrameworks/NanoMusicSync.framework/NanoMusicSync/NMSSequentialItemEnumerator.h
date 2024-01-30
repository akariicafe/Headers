@class NSMutableArray;

@interface NMSSequentialItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSMutableArray *_itemEnumerators;
}

- (id)nextItem;
- (void).cxx_destruct;
- (id)initWithItemEnumerators:(id)a0;

@end
