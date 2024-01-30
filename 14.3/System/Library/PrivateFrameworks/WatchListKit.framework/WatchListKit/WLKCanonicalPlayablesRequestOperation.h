@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, nonatomic) WLKCanonicalPlayablesResponse *response;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithContentID:(id)a0 profiles:(id)a1 caller:(id)a2;

@end
