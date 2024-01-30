@class NSData;

@interface NRPBSwitchRecord : PBCodable <NSCopying> {
    double _dateTimeInterval;
    NSData *_deviceIDBytes;
    int _switchIndex;
    struct { unsigned char dateTimeInterval : 1; unsigned char switchIndex : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
