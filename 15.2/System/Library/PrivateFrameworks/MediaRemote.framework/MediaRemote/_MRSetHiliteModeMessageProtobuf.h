@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {
    BOOL _hiliteMode;
    struct { unsigned char hiliteMode : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
