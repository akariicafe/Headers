@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContentPlayResponse *response;
@property (readonly, copy, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithCanonicalID:(id)a0 caller:(id)a1;

@end
