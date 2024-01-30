@class NSString, NSData;

@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest

@property (copy, nonatomic) NSString *keybagPath;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSData *tokenData;

- (void)buildStoreURLRequestWithURLRequest:(id)a0 builderProperties:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
