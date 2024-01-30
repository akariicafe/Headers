@class NSString;

@interface AWDSiriSessionLoadTimeout : PBCodable <NSCopying> {
    struct { unsigned char connectionTechnology : 1; unsigned char interfaceIndex : 1; unsigned char sendBufferSize : 1; unsigned char timestamp : 1; unsigned char wwanPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasConnectionURL;
@property (retain, nonatomic) NSString *connectionURL;
@property (nonatomic) BOOL hasInterfaceIndex;
@property (nonatomic) unsigned long long interfaceIndex;
@property (nonatomic) BOOL hasSendBufferSize;
@property (nonatomic) unsigned long long sendBufferSize;
@property (nonatomic) BOOL hasWwanPreferred;
@property (nonatomic) BOOL wwanPreferred;
@property (nonatomic) BOOL hasConnectionTechnology;
@property (nonatomic) unsigned long long connectionTechnology;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
