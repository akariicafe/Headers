@class NSString;

@interface SHLocalDataFetcher : NSObject <SHDataFetcher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clusterDataAtURL:(id)a0 forLocation:(id)a1 date:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchClusterURL:(id)a0 forCurrentStorefront:(id)a1 cachedUniqueHash:(id)a2 completionHandler:(id /* block */)a3;

@end
