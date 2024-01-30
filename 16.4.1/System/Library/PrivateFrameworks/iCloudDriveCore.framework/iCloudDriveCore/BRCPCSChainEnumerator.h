@class BRCItemID, BRCPrivateClientZone, NSError, NSMutableArray;

@interface BRCPCSChainEnumerator : NSEnumerator {
    unsigned long long _maxPathDepth;
    BRCPrivateClientZone *_clientZone;
    NSMutableArray *_stack;
    NSError *_error;
    BRCItemID *_itemIDNeedingListing;
}

- (id)nextObject;
- (id)error;
- (void).cxx_destruct;
- (id)initWithPCSChainInfo:(id)a0 clientZone:(id)a1;
- (id)itemIDNeedingListing;

@end
