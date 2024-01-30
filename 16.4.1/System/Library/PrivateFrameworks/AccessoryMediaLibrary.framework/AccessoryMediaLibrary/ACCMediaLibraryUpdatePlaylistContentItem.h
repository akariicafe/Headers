@class NSString;

@interface ACCMediaLibraryUpdatePlaylistContentItem : NSObject

@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (nonatomic) unsigned long long playlistPersistentID;
@property (readonly, nonatomic) unsigned long long validMask;
@property (nonatomic) unsigned long long persistentID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *albumArtist;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSString *composer;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)copyNSRepresentation:(int)a0;
- (void)fillStruct:(struct { unsigned int x0; unsigned long long x1; char *x2; char *x3; char *x4; char *x5; char *x6; char *x7; } *)a0;
- (id)initWithMediaLibrary:(id)a0 persistentID:(unsigned long long)a1 playlistPersistentID:(unsigned long long)a2;
- (id)initWithMediaLibrary:(id)a0 playlistPersistentID:(unsigned long long)a1 dict:(id)a2;

@end
