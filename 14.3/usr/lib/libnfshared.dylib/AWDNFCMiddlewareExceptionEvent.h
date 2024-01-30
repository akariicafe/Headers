@class NSData;

@interface AWDNFCMiddlewareExceptionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char errorCode : 1; unsigned char hardwareType : 1; unsigned char type : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (readonly, nonatomic) BOOL hasBreadcrumb;
@property (retain, nonatomic) NSData *breadcrumb;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasHardwareType;
@property (nonatomic) unsigned int hardwareType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
