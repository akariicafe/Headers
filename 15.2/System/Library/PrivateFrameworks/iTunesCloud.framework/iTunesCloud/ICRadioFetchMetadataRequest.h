@class NSArray, ICStoreRequestContext, NSData;

@interface ICRadioFetchMetadataRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *storeAdamIDs;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic) NSData *timedMetadataData;
@property (nonatomic) long long qualityOfService;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performWithResponseHandler:(id /* block */)a0;

@end
