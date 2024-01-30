@class NSDictionary, NSString, NSMutableDictionary;
@protocol SSItemLookupRequestDelegate;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {
    NSMutableDictionary *_parameters;
}

@property (readonly, copy) NSDictionary *parameters;
@property (nonatomic) id<SSItemLookupRequestDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)start;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (id)_convertedValueForValue:(id)a0;
- (id)_errorForStatusCode:(long long)a0;
- (id)_copyItemsFromResponse:(id)a0 expirationDate:(id)a1;
- (void)startWithItemLookupBlock:(id /* block */)a0;
- (void)setValue:(id)a0 forParameter:(id)a1;
- (id)valueForParameter:(id)a0;
- (id)copyQueryStringParameters;

@end
