@interface WBSAnalyticsSafariSelectedFavoritesGridItemEvent : PBCodable <NSCopying> {
    struct { unsigned char itemsPerRow : 1; unsigned char row : 1; unsigned char sectionIndex : 1; unsigned char timestamp : 1; unsigned char displayContext : 1; unsigned char section : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRow;
@property (nonatomic) unsigned long long row;
@property (nonatomic) BOOL hasItemsPerRow;
@property (nonatomic) unsigned long long itemsPerRow;
@property (nonatomic) BOOL hasSectionIndex;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasDisplayContext;
@property (nonatomic) int displayContext;
@property (nonatomic) BOOL hasSection;
@property (nonatomic) int section;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;
- (id)displayContextAsString:(int)a0;
- (int)StringAsDisplayContext:(id)a0;
- (id)sectionAsString:(int)a0;
- (int)StringAsSection:(id)a0;

@end
