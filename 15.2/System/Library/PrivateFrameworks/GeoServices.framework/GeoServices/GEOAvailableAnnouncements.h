@class NSString, NSMutableArray, PBDataReader;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_announcements;
    NSString *_languageCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_announcements : 1; unsigned char read_languageCode : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *announcements;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;

+ (Class)announcementType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)addAnnouncement:(id)a0;
- (id)announcementAtIndex:(unsigned long long)a0;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (id)dictionaryRepresentation;

@end
