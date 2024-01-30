@class NSData, _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying> {
    long long _maximumPacketSize;
    long long _packetCapacity;
    long long _packetCount;
    NSData *_contents;
    _MRAudioFormatSettingsProtobuf *_formatSettings;
    NSMutableArray *_packetDescriptions;
    struct { unsigned char maximumPacketSize : 1; unsigned char packetCapacity : 1; unsigned char packetCount : 1; } _has;
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
