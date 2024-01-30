@class _MRGameControllerDigitizerProtobuf, _MRGameControllerMotionProtobuf, _MRGameControllerButtonsProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {
    unsigned long long _controllerID;
    _MRGameControllerButtonsProtobuf *_buttons;
    _MRGameControllerDigitizerProtobuf *_digitizer;
    _MRGameControllerMotionProtobuf *_motion;
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
