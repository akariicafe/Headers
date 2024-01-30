@class NSString, NSDictionary, NSArray, NSURL;

@interface MPStoreRedownloadProductItemAsset : NSObject

@property (readonly, copy, nonatomic) NSString *downloadKey;
@property (readonly, copy, nonatomic) NSString *flavor;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, copy, nonatomic) NSArray *sinfs;
@property (readonly, copy, nonatomic) NSURL *URL;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
