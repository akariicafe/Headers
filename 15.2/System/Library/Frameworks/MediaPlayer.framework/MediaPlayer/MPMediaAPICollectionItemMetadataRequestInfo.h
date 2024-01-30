@class NSArray;

@interface MPMediaAPICollectionItemMetadataRequestInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *collectionItemRequests;
@property (readonly, copy, nonatomic) NSArray *tokenRenewalRequests;
@property (readonly, copy, nonatomic) NSArray *collectionRequests;
@property (readonly, nonatomic) unsigned long long totalRequestItemCount;

- (id)initWithMediaAPICollectionItemMetadataRequests:(id)a0 collectionMetadataRequest:(id)a1 authTokenRenewalRequests:(id)a2 totalItemRequestCount:(unsigned long long)a3;
- (void).cxx_destruct;

@end
