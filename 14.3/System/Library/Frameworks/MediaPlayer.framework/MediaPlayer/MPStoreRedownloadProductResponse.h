@class NSURL, MPStoreRedownloadProductItem, NSDictionary;

@interface MPStoreRedownloadProductResponse : NSObject

@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL;
@property (readonly, nonatomic) MPStoreRedownloadProductItem *item;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
