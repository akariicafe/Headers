@class NSString;

@interface NTKProtoPigment : PBCodable <NSCopying> {
    struct { unsigned char colorFraction : 1; unsigned char fromStore : 1; unsigned char isAddable : 1; unsigned char supportsSlider : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOptionName;
@property (retain, nonatomic) NSString *optionName;
@property (readonly, nonatomic) BOOL hasCollectionName;
@property (retain, nonatomic) NSString *collectionName;
@property (nonatomic) BOOL hasColorFraction;
@property (nonatomic) float colorFraction;
@property (nonatomic) BOOL hasIsAddable;
@property (nonatomic) BOOL isAddable;
@property (nonatomic) BOOL hasSupportsSlider;
@property (nonatomic) BOOL supportsSlider;
@property (readonly, nonatomic) BOOL hasAlternativeLocalizedStringTableName;
@property (retain, nonatomic) NSString *alternativeLocalizedStringTableName;
@property (readonly, nonatomic) BOOL hasBundlePrincipalClassName;
@property (retain, nonatomic) NSString *bundlePrincipalClassName;
@property (nonatomic) BOOL hasFromStore;
@property (nonatomic) BOOL fromStore;

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
