@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying> {
    float _a;
    float _b;
    float _dPadX;
    float _dPadY;
    float _leftShoulder;
    float _leftThumbstickX;
    float _leftThumbstickY;
    float _leftTrigger;
    float _pause;
    float _rightShoulder;
    float _rightThumbstickX;
    float _rightThumbstickY;
    float _rightTrigger;
    float _x;
    float _y;
    struct { unsigned char a : 1; unsigned char b : 1; unsigned char dPadX : 1; unsigned char dPadY : 1; unsigned char leftShoulder : 1; unsigned char leftThumbstickX : 1; unsigned char leftThumbstickY : 1; unsigned char leftTrigger : 1; unsigned char pause : 1; unsigned char rightShoulder : 1; unsigned char rightThumbstickX : 1; unsigned char rightThumbstickY : 1; unsigned char rightTrigger : 1; unsigned char x : 1; unsigned char y : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
