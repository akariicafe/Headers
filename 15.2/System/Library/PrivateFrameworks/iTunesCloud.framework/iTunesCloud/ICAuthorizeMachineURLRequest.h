@class NSString, NSData;

@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest

@property (copy, nonatomic) NSString *keybagPath;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSData *tokenData;

- (void).cxx_destruct;
- (void)buildStoreURLRequestWithURLRequest:(id)a0 builderProperties:(id)a1 completionHandler:(id /* block */)a2;

@end
