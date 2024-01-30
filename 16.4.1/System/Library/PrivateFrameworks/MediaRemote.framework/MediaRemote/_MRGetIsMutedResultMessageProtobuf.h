@interface _MRGetIsMutedResultMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char isMuted : 1; } _has;
}

@property (nonatomic) BOOL hasIsMuted;
@property (nonatomic) BOOL isMuted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
