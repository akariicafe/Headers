@class NSArray, WLKBasicContentRequestResponse, WLKBasicContentMetadata;

@interface WLKBasicContentRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSArray *contentIDs;
@property (readonly, nonatomic) WLKBasicContentRequestResponse *response;
@property (readonly, nonatomic) WLKBasicContentMetadata *basicContentMetadata;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithContentID:(id)a0 caller:(id)a1;
- (id)initWithContentIDs:(id)a0 caller:(id)a1;

@end
