@interface _MROriginClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    double _lastPlayingTimestamp;
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
