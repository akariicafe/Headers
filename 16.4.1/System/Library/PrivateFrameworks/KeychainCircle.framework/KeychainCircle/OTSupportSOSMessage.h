@interface OTSupportSOSMessage : PBCodable <NSCopying> {
    struct { unsigned char supported : 1; } _has;
}

@property (nonatomic) BOOL hasSupported;
@property (nonatomic) int supported;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsSupported:(id)a0;
- (id)supportedAsString:(int)a0;

@end
