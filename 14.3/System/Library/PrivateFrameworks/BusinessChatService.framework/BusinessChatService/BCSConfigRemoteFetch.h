@class NSString;

@interface BCSConfigRemoteFetch : BCSRemoteFetch <BCSConfigRemoteFetching, BCSShardRemoteFetching>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchConfigItemWithType:(long long)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchConfigItemWithType:(long long)a0 clientBundleID:(id)a1 xpcActivity:(id)a2 completion:(id /* block */)a3;
- (void)fetchShardMatching:(id)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)_configRequestForType:(long long)a0;
- (id)_bloomFilterRequestForShardMatching:(id)a0 timeout:(double)a1;

@end
