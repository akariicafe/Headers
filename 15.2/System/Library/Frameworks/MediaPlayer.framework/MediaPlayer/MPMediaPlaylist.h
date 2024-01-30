@class NSString, NSArray, MPMediaQuery;

@interface MPMediaPlaylist : MPMediaItemCollection {
    NSArray *_representativeArtists;
    MPMediaQuery *_seedTracksQuery;
}

@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) NSString *cloudGlobalID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long playlistAttributes;
@property (readonly, nonatomic) NSArray *seedItems;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *authorDisplayName;

+ (BOOL)supportsSecureCoding;
+ (void)_createFilterableDictionary;
+ (BOOL)canFilterByProperty:(id)a0;
+ (BOOL)_isValidPlaylistProperty:(id)a0;

- (id)artworkCatalog;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)mediaTypes;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)representativeItem;
- (id)initWithCoder:(id)a0;
- (BOOL)isCloudMix;
- (id)artworkCatalogsWithMaximumCount:(unsigned long long)a0;
- (id)tiledArtworkCatalogWithRows:(unsigned long long)a0 columns:(unsigned long long)a1;
- (BOOL)existsInLibrary;
- (void)removeFirstItem;
- (id)initWithPersistentID:(unsigned long long)a0;
- (id)initWithPersistentID:(unsigned long long)a0 mediaLibrary:(id)a1;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (id)multiverseIdentifier;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)representativeArtists;
- (id)seedTracksQuery;
- (void)setUserSelectedArtworkImage:(id)a0;
- (unsigned long long)count;
- (unsigned long long)hash;
- (id)items;
- (void)addItemWithProductID:(id)a0 completionHandler:(id /* block */)a1;

@end
