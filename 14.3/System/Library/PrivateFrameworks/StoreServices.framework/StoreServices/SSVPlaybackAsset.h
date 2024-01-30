@class NSDictionary, NSString, NSArray;

@interface SSVPlaybackAsset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *assetDictionary;
@property (readonly, nonatomic) NSString *downloadKey;
@property (readonly, nonatomic) NSString *flavor;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSArray *sinfs;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetDictionary:(id)a0;

@end
