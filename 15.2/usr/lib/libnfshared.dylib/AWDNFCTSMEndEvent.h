@class NSData;

@interface AWDNFCTSMEndEvent : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_aid;
    NSData *_discretionaryData;
    unsigned int _lcState;
    unsigned int _status;
    NSData *_uuidReference;
    BOOL _authEnable;
    BOOL _mfdEnable;
    BOOL _restricted;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char lcState : 1; unsigned char status : 1; unsigned char authEnable : 1; unsigned char mfdEnable : 1; unsigned char restricted : 1; } _has;
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
