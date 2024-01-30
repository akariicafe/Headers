@class GEOPBTransitIcon, NSString, PBDataReader, GEOPBTransitShield, PBUnknownFields;
@protocol GEOTransitTextDataSource, GEOTransitShieldDataSource, GEOTransitIconDataSource;

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_accessibilityString;
    GEOPBTransitShield *_iconFallbackShield;
    GEOPBTransitIcon *_icon;
    GEOPBTransitShield *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _artworkType;
    int _artworkUse;
    int _badge;
    struct { unsigned char has_artworkType : 1; unsigned char has_artworkUse : 1; unsigned char has_badge : 1; unsigned char read_unknownFields : 1; unsigned char read_accessibilityString : 1; unsigned char read_iconFallbackShield : 1; unsigned char read_icon : 1; unsigned char read_shield : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) int artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (readonly, nonatomic) id<GEOTransitTextDataSource> textDataSource;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasArtworkType;
@property (nonatomic) int artworkType;
@property (nonatomic) BOOL hasArtworkUse;
@property (nonatomic) int artworkUse;
@property (readonly, nonatomic) BOOL hasShield;
@property (retain, nonatomic) GEOPBTransitShield *shield;
@property (readonly, nonatomic) BOOL hasIcon;
@property (retain, nonatomic) GEOPBTransitIcon *icon;
@property (readonly, nonatomic) BOOL hasIconFallbackShield;
@property (retain, nonatomic) GEOPBTransitShield *iconFallbackShield;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) int badge;
@property (readonly, nonatomic) BOOL hasAccessibilityString;
@property (retain, nonatomic) NSString *accessibilityString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)artworkTypeAsString:(int)a0;
- (int)StringAsArtworkType:(id)a0;
- (id)artworkUseAsString:(int)a0;
- (int)StringAsArtworkUse:(id)a0;
- (id)badgeAsString:(int)a0;
- (int)StringAsBadge:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)dictionaryRepresentation;

@end
