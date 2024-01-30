@class NSData;

@interface AWDNFCSEOSRemovedEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _hardwareType;
    unsigned int _reason;
    NSData *_uuidReference;
    BOOL _hasCardEmulationStarted;
    BOOL _hasExpressTransactionStarted;
    struct { unsigned char timestamp : 1; unsigned char hardwareType : 1; unsigned char reason : 1; unsigned char hasCardEmulationStarted : 1; unsigned char hasExpressTransactionStarted : 1; } _has;
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
