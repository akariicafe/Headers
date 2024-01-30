@interface SKUIRemoveFromWishlistOperation : NSOperation {
    long long _entityID;
    long long _itemID;
    long long _reason;
}

- (void)main;
- (id)initWithItemIdentifier:(long long)a0 entityIdentifier:(long long)a1 reason:(long long)a2;

@end
