@class NSArray, NSDictionary, NSURL, NSString, MPStoreRedownloadProductItemAsset;

@interface MPStoreRedownloadProductItem : NSObject

@property (readonly, nonatomic) NSDictionary *responseDictionary;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL;
@property (nonatomic) BOOL usesCurrentAccountIfAvailable;
@property (readonly, copy, nonatomic) NSArray *allFlavors;
@property (readonly, nonatomic) MPStoreRedownloadProductItemAsset *asset;
@property (readonly, nonatomic) MPStoreRedownloadProductItemAsset *firstAsset;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (readonly, copy, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSURL *HLSPlaylistURL;
@property (readonly, nonatomic) NSURL *HLSKeyCertificateURL;
@property (readonly, nonatomic) NSURL *HLSKeyServerURL;
@property (readonly, nonatomic) NSURL *alternateHLSPlaylistURL;
@property (readonly, nonatomic) NSURL *alternateHLSKeyServerURL;
@property (readonly, nonatomic) NSURL *alternateHLSKeyCertificateURL;

- (void).cxx_destruct;
- (id)_initWithResponseDictionary:(id)a0;
- (id)assetForFlavor:(id)a0;
- (void)_enumerateAssetDictionariesWithBlock:(id /* block */)a0;

@end
