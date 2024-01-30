@class NSString;

@interface WFPBEditShortcutEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
