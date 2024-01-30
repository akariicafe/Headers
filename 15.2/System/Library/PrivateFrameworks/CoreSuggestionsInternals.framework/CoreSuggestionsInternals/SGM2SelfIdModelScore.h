@class NSString;

@interface SGM2SelfIdModelScore : PBCodable <NSCopying> {
    struct { unsigned char model : 1; unsigned char supervision : 1; unsigned char result : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasModel;
@property (nonatomic) int model;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) BOOL result;
@property (nonatomic) BOOL hasSupervision;
@property (nonatomic) int supervision;

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
- (id)modelAsString:(int)a0;
- (int)StringAsModel:(id)a0;
- (id)supervisionAsString:(int)a0;
- (int)StringAsSupervision:(id)a0;

@end
