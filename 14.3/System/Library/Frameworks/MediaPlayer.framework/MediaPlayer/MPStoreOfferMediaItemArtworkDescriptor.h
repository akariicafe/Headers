@class NSString, NSDictionary, NSArray;

@interface MPStoreOfferMediaItemArtworkDescriptor : NSObject <MPArtworkDataSourceVisualIdenticality> {
    long long _itemPersistentID;
    NSDictionary *_screenshotURLs;
    NSDictionary *_itemArtworkURLs;
    NSDictionary *_containerArtworkURLs;
    NSArray *_screenshotSizes;
    NSArray *_itemArtworkSizes;
    NSArray *_containerArtworkSizes;
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSString *cacheID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemPersistentID:(long long)a0 screenshotDictionaries:(id)a1 itemArtworkDictionaries:(id)a2 containerArtworkDictionaries:(id)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)artworkURLForSize:(struct CGSize { double x0; double x1; })a0 type:(long long)a1;
- (id)availableSizesForArtworkOfType:(long long)a0;
- (id)_preferredArtworkURLsForType:(long long)a0;
- (id)_availableSizesForArtworkURLs:(id)a0;
- (id)_sizeToURLDictionaryFromStoreDictionariesArray:(id)a0;

@end
