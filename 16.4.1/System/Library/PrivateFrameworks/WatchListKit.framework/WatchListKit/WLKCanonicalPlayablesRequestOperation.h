@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, nonatomic) WLKCanonicalPlayablesResponse *response;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithContentID:(id)a0 caller:(id)a1 canonicalType:(long long)a2;
- (id)initWithContentID:(id)a0 caller:(id)a1 isMovie:(BOOL)a2;
- (id)initWithContentID:(id)a0 profiles:(id)a1 caller:(id)a2;

@end
