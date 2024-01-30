@class NSData;

@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying> {
    NSData *_pairingData;
    int _state;
    int _status;
    BOOL _isRetrying;
    BOOL _isUsingSystemPairing;
    struct { unsigned char state : 1; unsigned char status : 1; unsigned char isRetrying : 1; unsigned char isUsingSystemPairing : 1; } _has;
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
