@class NSString;

@interface BCSVisibility : PBCodable <NSCopying> {
    struct { unsigned char ratio : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) BOOL hasRatio;
@property (nonatomic) double ratio;

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
