@class GEORevealedPlaceCardModuleTypeTitle, GEORevealedPlaceCardModuleTypeHours, GEORevealedPlaceCardModuleTypeUnifiedActionRow, PBDataReader, GEORevealedPlaceCardModuleTypeShowcase, GEORevealedPlaceCardModuleTypePhotos, GEORevealedPlaceCardModuleTypeInfos;

@interface GEORevealedPlaceCardModule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORevealedPlaceCardModuleTypeHours *_hours;
    GEORevealedPlaceCardModuleTypeInfos *_infos;
    GEORevealedPlaceCardModuleTypePhotos *_photos;
    GEORevealedPlaceCardModuleTypeShowcase *_showcase;
    GEORevealedPlaceCardModuleTypeTitle *_title;
    GEORevealedPlaceCardModuleTypeUnifiedActionRow *_unifiedActionRow;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_hours : 1; unsigned char read_infos : 1; unsigned char read_photos : 1; unsigned char read_showcase : 1; unsigned char read_title : 1; unsigned char read_unifiedActionRow : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeTitle *title;
@property (readonly, nonatomic) BOOL hasUnifiedActionRow;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeUnifiedActionRow *unifiedActionRow;
@property (readonly, nonatomic) BOOL hasPhotos;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypePhotos *photos;
@property (readonly, nonatomic) BOOL hasShowcase;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeShowcase *showcase;
@property (readonly, nonatomic) BOOL hasHours;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeHours *hours;
@property (readonly, nonatomic) BOOL hasInfos;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeInfos *infos;

+ (BOOL)isValid:(id)a0;
+ (id)moduleWithType:(int)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;

@end
