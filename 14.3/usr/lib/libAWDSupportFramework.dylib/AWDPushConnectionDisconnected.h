@class NSString;

@interface AWDPushConnectionDisconnected : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char error : 1; unsigned char genericError : 1; unsigned char linkQuality : 1; unsigned char sslError : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasError;
@property (nonatomic) unsigned int error;
@property (nonatomic) BOOL hasSslError;
@property (nonatomic) unsigned int sslError;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic) int genericError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
