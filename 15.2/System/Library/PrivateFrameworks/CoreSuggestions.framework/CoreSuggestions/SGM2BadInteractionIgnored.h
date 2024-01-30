@class NSString;

@interface SGM2BadInteractionIgnored : PBCodable <NSCopying> {
    struct { unsigned char reason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

- (id)reasonAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsReason:(id)a0;
- (id)dictionaryRepresentation;

@end
