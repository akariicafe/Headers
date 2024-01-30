@class NSString, MPModelAlbum, MPModelArtist, NSDate, MPModelPlaylist, MPModelRadioStation;

@interface MPModelPlayEvent : MPModelObject

@property (readonly, copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *datePlayed;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;

+ (id)__artist_KEY;
+ (id)__album_KEY;
+ (id)__radioStation_KEY;
+ (id)__datePlayed_KEY;
+ (id)__playlist_KEY;

- (id)genericObjectRepresentation;
- (id)contentItemCollectionInfo;
- (long long)itemType;

@end
