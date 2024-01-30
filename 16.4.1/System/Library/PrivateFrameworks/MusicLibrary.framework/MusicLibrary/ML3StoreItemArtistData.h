@class NSArray, NSData, NSDateFormatter;

@interface ML3StoreItemArtistData : NSObject {
    NSArray *_lookupItems;
    NSData *_artistData;
    NSArray *_itemArtistProperties;
    NSArray *_albumArtistProperties;
    NSDateFormatter *_storePlatformDateFormatter;
}

@property (readonly, nonatomic) unsigned long long artistCount;

- (void).cxx_destruct;
- (id)artistData;
- (id)initWithLookupItems:(id)a0;
- (id)_storeItemArtistsImportPropertiesForAlbumArtist;
- (id)_storeItemArtistsImportPropertiesForItemArtist;
- (id)_storeItemArtistsImportPropertiesFromLookupItems:(id)a0 itemArtistImport:(BOOL)a1;
- (id)initWithArtistData:(id)a0;
- (id)parsedStoreItemArtistsImportPropertiesForAlbumArtists;
- (id)parsedStoreItemArtistsImportPropertiesForItemArtists;

@end
