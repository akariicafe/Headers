@class NSArray, NSString;

@interface SSWishlistAddItemsRequest : SSRequest

@property (readonly, copy) NSArray *items;
@property (readonly, copy) NSString *caller;
@property (readonly, copy) NSString *version;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (void).cxx_destruct;
- (void)startWithAddItemsResponseBlock:(id /* block */)a0;
- (id)_convertedValueForValue:(id)a0;
- (id)copyQueryStringParameters;
- (id)initWithItems:(id)a0 caller:(id)a1 version:(id)a2;

@end
