@class NSArray, NSString;

@interface SSWishlistAddItemsRequest : SSRequest

@property (readonly, copy) NSArray *items;
@property (readonly, copy) NSString *caller;
@property (readonly, copy) NSString *version;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithItems:(id)a0 caller:(id)a1 version:(id)a2;
- (void)startWithAddItemsResponseBlock:(id /* block */)a0;
- (id)_convertedValueForValue:(id)a0;
- (id)copyQueryStringParameters;

@end
