@class NSString, PBDataReader;

@interface GEOLocalizedPublisherAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_displayName;
    NSString *_language;
    NSString *_subtitle;
    NSString *_themeColorDarkMode;
    NSString *_themeColorLightMode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _iconIdentifier;
    unsigned int _logoCenteredColorizedIdentifier;
    unsigned int _logoCenteredIdentifier;
    unsigned int _logoIdentifier;
    unsigned int _logoWithoutPaddingIdentifier;
    struct { unsigned char has_iconIdentifier : 1; unsigned char has_logoCenteredColorizedIdentifier : 1; unsigned char has_logoCenteredIdentifier : 1; unsigned char has_logoIdentifier : 1; unsigned char has_logoWithoutPaddingIdentifier : 1; unsigned char read_displayName : 1; unsigned char read_language : 1; unsigned char read_subtitle : 1; unsigned char read_themeColorDarkMode : 1; unsigned char read_themeColorLightMode : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasIconIdentifier;
@property (nonatomic) unsigned int iconIdentifier;
@property (nonatomic) BOOL hasLogoIdentifier;
@property (nonatomic) unsigned int logoIdentifier;
@property (nonatomic) BOOL hasLogoCenteredIdentifier;
@property (nonatomic) unsigned int logoCenteredIdentifier;
@property (readonly, nonatomic) BOOL hasThemeColorLightMode;
@property (retain, nonatomic) NSString *themeColorLightMode;
@property (readonly, nonatomic) BOOL hasThemeColorDarkMode;
@property (retain, nonatomic) NSString *themeColorDarkMode;
@property (nonatomic) BOOL hasLogoCenteredColorizedIdentifier;
@property (nonatomic) unsigned int logoCenteredColorizedIdentifier;
@property (nonatomic) BOOL hasLogoWithoutPaddingIdentifier;
@property (nonatomic) unsigned int logoWithoutPaddingIdentifier;

+ (BOOL)isValid:(id)a0;

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
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
