@class NSString;

@interface SHCDNDataFetcher : NSObject <SHDataFetcher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadedClusterFilePath;
+ (id)downloadedClusterDirectoryPath;
+ (BOOL)hasDownloadedClusterFile;

- (void)clusterDataForLocation:(id)a0 date:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)clearDataWithError:(id *)a0;
- (void)fetchTargetingDataForCurrentStorefront:(id)a0 cachedEtag:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDataForCountryCode:(id)a0 etag:(id)a1 insights:(id)a2 completion:(id /* block */)a3;
- (BOOL)doesRequestEtag:(id)a0 matchInResponse:(id)a1;
- (id)endpointFromDate:(id)a0 insights:(id)a1 location:(id)a2;

@end
