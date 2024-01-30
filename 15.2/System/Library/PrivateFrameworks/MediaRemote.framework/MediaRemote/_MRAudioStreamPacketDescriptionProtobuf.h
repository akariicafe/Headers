@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying> {
    long long _startOffset;
    unsigned int _dataByteSize;
    unsigned int _variableFramesInPacket;
    struct { unsigned char startOffset : 1; unsigned char dataByteSize : 1; unsigned char variableFramesInPacket : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
