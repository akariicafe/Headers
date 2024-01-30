@class NSString, ACCMediaLibraryUpdatePlaylistContent;

@interface ACCMediaLibraryUpdatePlaylist : NSObject

@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (retain, nonatomic) NSString *revision;
@property (nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) unsigned long long validMask;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long parentPersistentID;
@property (nonatomic) BOOL folder;
@property (nonatomic) BOOL geniusMix;
@property (nonatomic) BOOL radioStation;
@property (nonatomic) BOOL smartPlaylist;
@property (nonatomic) unsigned short radioStationOrdering;
@property (nonatomic) int contentStyle;
@property (retain, nonatomic) ACCMediaLibraryUpdatePlaylistContent *content;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)copyDict;
- (id)initWithMediaLibrary:(id)a0 persistentID:(unsigned long long)a1 revision:(id)a2;
- (id)initWithMediaLibrary:(id)a0 dict:(id)a1;
- (void)fillStruct:(struct { unsigned int x0; unsigned long long x1; char *x2; unsigned long long x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned short x9; } *)a0;

@end
