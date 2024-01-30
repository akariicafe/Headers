@class _MRGameControllerPropertiesProtobuf;

@interface _MRGameControllerPropertiesMessageProtobuf : PBCodable <NSCopying> {
    unsigned long long _controllerID;
    _MRGameControllerPropertiesProtobuf *_properties;
    struct { unsigned char controllerID : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
