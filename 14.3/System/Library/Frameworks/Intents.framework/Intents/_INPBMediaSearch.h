@class NSArray, _INPBDateTimeRange, NSString, _INPBString;

@interface _INPBMediaSearch : PBCodable <_INPBMediaSearch, NSSecureCoding, NSCopying> {
    struct { unsigned char mediaType : 1; unsigned char reference : 1; unsigned char sortOrder : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *albumName;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (retain, nonatomic) _INPBString *artistName;
@property (readonly, nonatomic) BOOL hasArtistName;
@property (copy, nonatomic) NSArray *genreNames;
@property (readonly, nonatomic) unsigned long long genreNamesCount;
@property (retain, nonatomic) _INPBString *mediaIdentifier;
@property (readonly, nonatomic) BOOL hasMediaIdentifier;
@property (retain, nonatomic) _INPBString *mediaName;
@property (readonly, nonatomic) BOOL hasMediaName;
@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (copy, nonatomic) NSArray *moodNames;
@property (readonly, nonatomic) unsigned long long moodNamesCount;
@property (nonatomic) int reference;
@property (nonatomic) BOOL hasReference;
@property (retain, nonatomic) _INPBDateTimeRange *releaseDate;
@property (readonly, nonatomic) BOOL hasReleaseDate;
@property (nonatomic) int sortOrder;
@property (nonatomic) BOOL hasSortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)genreNamesType;
+ (Class)moodNamesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearGenreNames;
- (void)addGenreNames:(id)a0;
- (id)genreNamesAtIndex:(unsigned long long)a0;
- (id)mediaTypeAsString:(int)a0;
- (int)StringAsMediaType:(id)a0;
- (void)clearMoodNames;
- (void)addMoodNames:(id)a0;
- (id)moodNamesAtIndex:(unsigned long long)a0;
- (id)referenceAsString:(int)a0;
- (int)StringAsReference:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)sortOrderAsString:(int)a0;
- (int)StringAsSortOrder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
