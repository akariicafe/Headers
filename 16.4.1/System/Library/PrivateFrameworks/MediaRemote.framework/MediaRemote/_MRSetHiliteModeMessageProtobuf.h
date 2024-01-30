@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char hiliteMode : 1; } _has;
}

@property (nonatomic) BOOL hasHiliteMode;
@property (nonatomic) BOOL hiliteMode;

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
