@class NSString;

@interface PPPBFeatureIdFeatureValuePair : PBCodable <NSCopying> {
    struct { unsigned char value : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFeatureId;
@property (retain, nonatomic) NSString *featureId;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) float value;

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
