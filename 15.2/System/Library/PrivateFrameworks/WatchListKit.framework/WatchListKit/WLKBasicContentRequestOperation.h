@class NSArray, WLKBasicContentRequestResponse, WLKBasicContentMetadata;

@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSArray *contentIDs;
@property (readonly, nonatomic) WLKBasicContentRequestResponse *response;
@property (readonly, nonatomic) WLKBasicContentMetadata *basicContentMetadata;

- (void)processResponse;
- (void).cxx_destruct;
- (id)initWithContentIDs:(id)a0 caller:(id)a1;
- (id)initWithContentID:(id)a0 caller:(id)a1;

@end
