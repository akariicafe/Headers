@class NSString;

@interface _MRGameControllerPropertiesProtobuf : PBCodable <NSCopying> {
    int _buttonAUpDelay;
    unsigned int _playerIndex;
    int _profile;
    NSString *_vendorName;
    BOOL _supportsExtendedMotion;
    struct { unsigned char buttonAUpDelay : 1; unsigned char playerIndex : 1; unsigned char profile : 1; unsigned char supportsExtendedMotion : 1; } _has;
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
