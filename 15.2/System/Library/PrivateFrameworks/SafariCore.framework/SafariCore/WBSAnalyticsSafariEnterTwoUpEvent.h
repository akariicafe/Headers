@interface WBSAnalyticsSafariEnterTwoUpEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char method : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasMethod;
@property (nonatomic) int method;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)methodAsString:(int)a0;
- (int)StringAsMethod:(id)a0;

@end
