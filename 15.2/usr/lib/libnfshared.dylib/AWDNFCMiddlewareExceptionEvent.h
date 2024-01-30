@class NSData;

@interface AWDNFCMiddlewareExceptionEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSData *_breadcrumb;
    unsigned int _errorCode;
    unsigned int _hardwareType;
    unsigned int _type;
    NSData *_uuidReference;
    unsigned int _version;
    struct { unsigned char timestamp : 1; unsigned char errorCode : 1; unsigned char hardwareType : 1; unsigned char type : 1; unsigned char version : 1; } _has;
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
