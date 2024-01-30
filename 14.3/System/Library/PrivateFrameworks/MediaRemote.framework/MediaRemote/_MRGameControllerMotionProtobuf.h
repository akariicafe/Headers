@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying> {
    _MRGameControllerAccelerationProtobuf *_attitude;
    _MRGameControllerAccelerationProtobuf *_gravity;
    _MRGameControllerAccelerationProtobuf *_rotation;
    _MRGameControllerAccelerationProtobuf *_userAcceleration;
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
