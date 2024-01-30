@class NSMutableDictionary;

@interface SKUIAddToWishlistOperation : NSOperation {
    long long _itemIdentifier;
    long long _reason;
    NSMutableDictionary *_requestParameters;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithItem:(id)a0 reason:(long long)a1;

@end
