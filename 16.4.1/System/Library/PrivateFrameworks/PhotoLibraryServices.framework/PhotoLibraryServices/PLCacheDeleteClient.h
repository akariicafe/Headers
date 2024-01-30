@class NSString, NSByteCountFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface PLCacheDeleteClient : NSObject {
    NSString *_cachedVolume;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheDeleteQueryQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSString *pathForVolume;
@property (readonly, nonatomic) NSString *cacheDeleteVolume;
@property (readonly, nonatomic) NSByteCountFormatter *byteFormatter;
@property (nonatomic) struct CacheDeleteToken { } *currentCacheDeletePurgeToken;

+ (BOOL)hasEntitlementsForCacheDelete;

- (void).cxx_destruct;
- (void)cancelDiskSpaceAvailabilityRequest;
- (id)initWithQoSClass:(unsigned int)a0 pathForVolume:(id)a1 callbackQueue:(id)a2;
- (void)requestDiskSpaceAvailabilityOfSize:(long long)a0 completion:(id /* block */)a1;
- (void)_notifyDiskAvailabilityRequestCompletionHandler:(id /* block */)a0 withSuccess:(BOOL)a1 numBytesPurged:(long long)a2 additionalBytesRequired:(long long)a3 error:(id)a4;
- (struct { long long x0; long long x1; })_queryAvailableSpace;

@end
