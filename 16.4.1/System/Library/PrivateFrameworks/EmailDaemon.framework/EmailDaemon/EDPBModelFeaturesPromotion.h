@class NSString;

@interface EDPBModelFeaturesPromotion : PBCodable <NSCopying> {
    struct { unsigned char headerKeyFilteredCount : 1; unsigned char toCount : 1; unsigned char unknownFeatureCount : 1; } _has;
}

@property (nonatomic) BOOL hasUnknownFeatureCount;
@property (nonatomic) unsigned int unknownFeatureCount;
@property (nonatomic) BOOL hasToCount;
@property (nonatomic) unsigned int toCount;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL hasHeaderKeyFilteredCount;
@property (nonatomic) unsigned int headerKeyFilteredCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
