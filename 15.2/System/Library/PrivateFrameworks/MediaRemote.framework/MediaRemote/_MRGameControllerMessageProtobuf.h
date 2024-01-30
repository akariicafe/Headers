@class _MRGameControllerDigitizerProtobuf, _MRGameControllerMotionProtobuf, _MRGameControllerButtonsProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {
    unsigned long long _controllerID;
    _MRGameControllerButtonsProtobuf *_buttons;
    _MRGameControllerDigitizerProtobuf *_digitizer;
    _MRGameControllerMotionProtobuf *_motion;
    struct { unsigned char controllerID : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
