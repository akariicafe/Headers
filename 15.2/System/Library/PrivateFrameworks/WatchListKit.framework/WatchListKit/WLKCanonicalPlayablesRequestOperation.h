@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, nonatomic) WLKCanonicalPlayablesResponse *response;

- (void)processResponse;
- (void).cxx_destruct;
- (id)initWithContentID:(id)a0 profiles:(id)a1 caller:(id)a2;

@end
