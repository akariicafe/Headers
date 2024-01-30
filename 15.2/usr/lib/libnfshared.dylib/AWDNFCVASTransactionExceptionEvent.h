@class NSData;

@interface AWDNFCVASTransactionExceptionEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _commandType;
    unsigned int _swStatus;
    NSData *_uuidReference;
    struct { unsigned char timestamp : 1; unsigned char commandType : 1; unsigned char swStatus : 1; } _has;
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
