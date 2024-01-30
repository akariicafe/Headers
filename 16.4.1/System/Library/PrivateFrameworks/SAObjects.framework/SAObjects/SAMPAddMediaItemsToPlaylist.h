@class NSString, NSArray, SAMPPlaylist;

@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;
@property (copy, nonatomic) NSString *insertLocation;
@property (copy, nonatomic) NSArray *mediaItems;
@property (retain, nonatomic) SAMPPlaylist *playlist;

+ (id)addMediaItemsToPlaylistWithDictionary:(id)a0 context:(id)a1;
+ (id)addMediaItemsToPlaylist;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
