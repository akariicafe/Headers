@class NSDictionary, NSMutableDictionary;

@interface MPMediaLibraryAlbumAppData : NSObject {
    NSDictionary *_appDataDict;
    NSMutableDictionary *_dirtyPopularityDict;
}

@property (readonly, nonatomic) long long version;

- (id)init;
- (void).cxx_destruct;
- (id)createAppDataDictionary;
- (id)initWithAppDataDictionary:(id)a0;
- (void)setSongPopularity:(id)a0 forAdamID:(long long)a1;
- (void)setSongPopularity:(id)a0 forIdentifierSet:(id)a1;
- (id)songPopularityForAdamID:(long long)a0;
- (id)songPopularityForIdentifiers:(id)a0;

@end
