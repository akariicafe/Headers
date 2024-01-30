@class NSString, _MRTransactionKeyProtobuf, NSData;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying> {
    unsigned long long _totalLength;
    unsigned long long _totalWritePosition;
    NSString *_identifier;
    _MRTransactionKeyProtobuf *_key;
    NSData *_packetData;
    struct { unsigned char totalLength : 1; unsigned char totalWritePosition : 1; } _has;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)customDictionaryRepresentation;

@end
