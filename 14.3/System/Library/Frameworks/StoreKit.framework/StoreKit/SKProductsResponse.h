@class NSArray;

@interface SKProductsResponse : NSObject {
    id _internal;
}

@property (readonly, nonatomic) NSArray *products;
@property (readonly, nonatomic) NSArray *invalidProductIdentifiers;

- (void)_setProducts:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setInvalidIdentifiers:(id)a0;

@end
