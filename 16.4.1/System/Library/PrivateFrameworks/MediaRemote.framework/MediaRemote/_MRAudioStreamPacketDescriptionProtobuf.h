@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying> {
    struct { unsigned char startOffset : 1; unsigned char dataByteSize : 1; unsigned char variableFramesInPacket : 1; } _has;
}

@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic) long long startOffset;
@property (nonatomic) BOOL hasVariableFramesInPacket;
@property (nonatomic) unsigned int variableFramesInPacket;
@property (nonatomic) BOOL hasDataByteSize;
@property (nonatomic) unsigned int dataByteSize;

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
