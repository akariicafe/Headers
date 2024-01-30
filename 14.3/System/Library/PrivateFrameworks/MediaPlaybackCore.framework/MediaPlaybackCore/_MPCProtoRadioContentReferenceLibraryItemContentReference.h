@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <NSCopying> {
    struct { unsigned char cloudID : 1; unsigned char duration : 1; unsigned char fileSize : 1; unsigned char storeAdamID : 1; unsigned char albumDiscCount : 1; unsigned char albumTrackCount : 1; unsigned char contentType : 1; unsigned char discNumber : 1; unsigned char trackNumber : 1; unsigned char year : 1; unsigned char isCompilation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAlbumArtistName;
@property (retain, nonatomic) NSString *albumArtistName;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (retain, nonatomic) NSString *albumName;
@property (readonly, nonatomic) BOOL hasArtistName;
@property (retain, nonatomic) NSString *artistName;
@property (readonly, nonatomic) BOOL hasComposerName;
@property (retain, nonatomic) NSString *composerName;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic) int contentType;
@property (readonly, nonatomic) BOOL hasCopyrightText;
@property (retain, nonatomic) NSString *copyrightText;
@property (nonatomic) BOOL hasAlbumDiscCount;
@property (nonatomic) int albumDiscCount;
@property (nonatomic) BOOL hasDiscNumber;
@property (nonatomic) int discNumber;
@property (nonatomic) BOOL hasFileSize;
@property (nonatomic) double fileSize;
@property (readonly, nonatomic) BOOL hasGenreName;
@property (retain, nonatomic) NSString *genreName;
@property (nonatomic) BOOL hasIsCompilation;
@property (nonatomic) BOOL isCompilation;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasStoreAdamID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) BOOL hasCloudID;
@property (nonatomic) long long cloudID;
@property (nonatomic) BOOL hasAlbumTrackCount;
@property (nonatomic) int albumTrackCount;
@property (nonatomic) BOOL hasTrackNumber;
@property (nonatomic) int trackNumber;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) int year;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
