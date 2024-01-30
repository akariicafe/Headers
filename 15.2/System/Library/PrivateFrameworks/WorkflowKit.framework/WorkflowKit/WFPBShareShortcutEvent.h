@class NSString;

@interface WFPBShareShortcutEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; unsigned char source : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) BOOL hasSharingDestinationBundleIdentifier;
@property (retain, nonatomic) NSString *sharingDestinationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasSharingMode;
@property (retain, nonatomic) NSString *sharingMode;

- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
