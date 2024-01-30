@class NSString, WLKVideoAsset, WLKArtworkVariantListing;

@interface WLKVideo : NSObject

@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) WLKArtworkVariantListing *images;
@property (readonly, nonatomic) WLKVideoAsset *asset;

+ (id)videosWithDictionaries:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
