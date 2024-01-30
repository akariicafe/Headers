@class NSString;

@interface BCSItemRemoteFetch : BCSRemoteFetch <BCSItemRemoteFetching>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchItemsWithBucketStartIndex:(long long)a0 endIndex:(long long)a1 type:(long long)a2 forClientBundleID:(id)a3 completion:(id /* block */)a4;
- (void)fetchBusinessItemWithBizID:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)_fetchItemRequestWithStartIndex:(long long)a0 endIndex:(long long)a1 timeout:(double)a2 type:(long long)a3;

@end
