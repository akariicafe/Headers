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

- (BOOL)readFrom:(id)a0;
- (id)customDictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
