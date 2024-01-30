@class NSString;

@interface HDCodableQuantity : PBCodable <NSCopying> {
    struct { unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;
@property (readonly, nonatomic) BOOL hasUnitString;
@property (retain, nonatomic) NSString *unitString;

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
