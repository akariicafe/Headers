@class NSData;

@interface AWDNFCReaderSessionStarted : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _currentBatteryLevel;
    unsigned int _type;
    NSData *_uuidReference;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char currentBatteryLevel : 1; unsigned char type : 1; } _has;
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
