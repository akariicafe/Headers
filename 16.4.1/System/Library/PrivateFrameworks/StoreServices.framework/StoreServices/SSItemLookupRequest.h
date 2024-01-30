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

- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (BOOL)start;
- (id)_convertedValueForValue:(id)a0;
- (id)_copyItemsFromResponse:(id)a0 expirationDate:(id)a1;
- (id)_errorForStatusCode:(long long)a0;
- (id)copyQueryStringParameters;
- (void)setValue:(id)a0 forParameter:(id)a1;
- (void)startWithItemLookupBlock:(id /* block */)a0;
- (id)valueForParameter:(id)a0;

@end
