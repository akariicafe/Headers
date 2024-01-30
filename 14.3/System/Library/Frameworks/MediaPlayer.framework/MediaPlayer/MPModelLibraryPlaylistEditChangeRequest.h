@class NSString, MPMediaLibrary, UIImage, MPModelPlaylist, MPSectionedCollection, NSNumber;

@interface MPModelLibraryPlaylistEditChangeRequest : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL didSetPlaylistUserImage;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) MPSectionedCollection *playlistEntries;
@property (copy, nonatomic) NSString *playlistDescription;
@property (copy, nonatomic) NSString *playlistName;
@property (retain, nonatomic) UIImage *playlistUserImage;
@property (copy, nonatomic, getter=isPublicPlaylist) NSNumber *publicPlaylist;
@property (copy, nonatomic, getter=isVisiblePlaylist) NSNumber *visiblePlaylist;
@property (copy, nonatomic, getter=isCuratorPlaylist) NSNumber *curatorPlaylist;
@property (copy, nonatomic) NSNumber *isOwner;
@property (copy, nonatomic) NSString *authorStoreIdentifier;
@property (retain, nonatomic) MPModelPlaylist *parentPlaylist;
@property (nonatomic) BOOL shouldCreatePlaylist;
@property (retain, nonatomic) MPModelPlaylist *playlist;

+ (id)requiredPlaylistEntryProperties;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithLocalPersistenceResponseHandler:(id /* block */)a0 completeResponseHandler:(id /* block */)a1;

@end
