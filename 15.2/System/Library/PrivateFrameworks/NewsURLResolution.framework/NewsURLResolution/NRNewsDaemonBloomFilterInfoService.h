@class FCAsyncOnceOperation, NTPBBloomFilterInfo;

@interface NRNewsDaemonBloomFilterInfoService : NSObject <NRBloomFilterInfoService>

@property (copy, nonatomic) NTPBBloomFilterInfo *bloomFilterInfo;
@property (readonly, nonatomic) FCAsyncOnceOperation *fetchOnceOperation;

- (void).cxx_destruct;
- (id)init;
- (void)_fetchBloomFilterInfoWithCompletion:(id /* block */)a0;
- (void)fetchWebURLBloomFilterInfoWithCompletion:(id /* block */)a0;

@end
