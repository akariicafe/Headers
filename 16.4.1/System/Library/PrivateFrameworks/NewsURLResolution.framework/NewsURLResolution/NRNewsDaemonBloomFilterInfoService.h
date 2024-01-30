@class FCAsyncOnceOperation, NTPBBloomFilterInfo;

@interface NRNewsDaemonBloomFilterInfoService : NSObject <NRBloomFilterInfoService>

@property (copy, nonatomic) NTPBBloomFilterInfo *bloomFilterInfo;
@property (readonly, nonatomic) FCAsyncOnceOperation *fetchOnceOperation;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchBloomFilterInfoWithCompletion:(id /* block */)a0;
- (void)fetchWebURLBloomFilterInfoWithCompletion:(id /* block */)a0;

@end
