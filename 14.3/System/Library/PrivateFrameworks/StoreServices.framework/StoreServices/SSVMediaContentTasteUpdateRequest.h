@class NSArray, NSString;

@interface SSVMediaContentTasteUpdateRequest : SSRequest <SSXPCCoding>

@property (copy, nonatomic) NSArray *contentTasteItemUpdates;
@property (nonatomic) BOOL shouldInvalidateLocalCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)startWithResponseBlock:(id /* block */)a0;

@end
