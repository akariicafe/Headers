@interface AWDSafariParticipatedInPasswordAutoFill : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char autoFillInteractionType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasAutoFillInteractionType;
@property (nonatomic) int autoFillInteractionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)autoFillInteractionTypeAsString:(int)a0;
- (int)StringAsAutoFillInteractionType:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
