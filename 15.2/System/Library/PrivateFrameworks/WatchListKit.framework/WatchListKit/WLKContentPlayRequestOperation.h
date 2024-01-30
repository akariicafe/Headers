@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContentPlayResponse *response;
@property (readonly, copy, nonatomic) NSString *canonicalID;

- (void)processResponse;
- (void).cxx_destruct;
- (id)initWithCanonicalID:(id)a0 caller:(id)a1;

@end
