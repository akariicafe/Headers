@class NSString;

@interface ACCMediaLibraryUpdateItem : NSObject

@property (retain, nonatomic) NSString *mediaLibraryUID;
@property (retain, nonatomic) NSString *revision;
@property (nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) unsigned long long validMask;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (nonatomic) int rating;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned long long albumPersistentID;
@property (retain, nonatomic) NSString *albumTitle;
@property (nonatomic) unsigned short albumTrackNumber;
@property (nonatomic) unsigned short albumTrackCount;
@property (nonatomic) unsigned short albumDiscNumber;
@property (nonatomic) unsigned short albumDiscCount;
@property (nonatomic) unsigned long long artistPersistentID;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) unsigned long long albumArtistPersistentID;
@property (retain, nonatomic) NSString *albumArtist;
@property (nonatomic) unsigned long long genrePersistentID;
@property (retain, nonatomic) NSString *genre;
@property (nonatomic) unsigned long long composerPersistentID;
@property (retain, nonatomic) NSString *composer;
@property (nonatomic) BOOL partOfCompilation;
@property (nonatomic) BOOL local;
@property (nonatomic) unsigned short chapterCount;

- (id)description;
- (void).cxx_destruct;
- (id)copyDict;
- (id)debugDescription;
- (id)initWithMediaLibrary:(id)a0 persistentID:(unsigned long long)a1 revision:(id)a2;
- (id)initWithMediaLibrary:(id)a0 dict:(id)a1;
- (void)fillStruct:(struct { unsigned int x0; unsigned long long x1; char *x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned long long x6; char *x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned long long x12; char *x13; unsigned long long x14; char *x15; unsigned long long x16; char *x17; unsigned long long x18; char *x19; unsigned char x20; unsigned char x21; unsigned short x22; } *)a0;

@end
